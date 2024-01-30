#include <iostream>
#include <vector>
#include <string>
#include <complex>

#include "LargeNumbers.h"

#define NUM_SYSTEM 10

typedef std::complex<double> complex_t;

namespace helping {
    bool checkString(const char *line, size_t size) {
        long long dotCount = 0;
        for (long long i = 0; i < size; i++) {
            if (!isdigit(line[i])) {
                if (line[i] != '.') {
                    return false;
                }
                dotCount++;
            }
        }
        if (dotCount > 1) {
            return false;
        }
        return true;
    }

    void removeEndZeros(const char *line, size_t &size) {
        while (size != 0 && line[size - 1] == '0') {
            size--;
        }
    }

    void fft(std::vector<complex_t> &a, bool invert) {
        long long size = a.size();
        if (size > 1) {
            std::vector<complex_t> a0(size / 2);
            std::vector<complex_t> a1(size / 2);
            for (int i = 0, j = 0; i < size; i += 2, ++j) {
                a0[j] = a[i];
                a1[j] = a[i + 1];
            }
            fft(a0, invert);
            fft(a1, invert);

            double ang = 2 * acos(-1) / size * (invert ? -1 : 1);
            complex_t w(1);
            complex_t wn(std::polar(1., ang));
            for (int i = 0; i < size / 2; ++i) {
                a[i] = a0[i] + w * a1[i];
                a[i + size / 2] = a0[i] - w * a1[i];
                if (invert) {
                    a[i] /= 2;
                    a[i + size / 2] /= 2;
                }
                w *= wn;
            }
        }
    }
}

namespace LargeNumbers {
    LargeNumber::LargeNumber() {
        sign = 1;
        exponent = 0;
        significand = std::vector<base>(1, 0);
    }

    LargeNumber::LargeNumber(const long double &ldNum) {
        *this = literals::operator ""_LN(ldNum);
    }

    LargeNumber literals::operator ""_LN(const char *line, size_t size) {
        helping::removeEndZeros(line, size);

        LargeNumber res;
        int start = 0;

        if (!isdigit(line[0])) {
            start++;
            if (line[0] == '-') {
                res.sign = -1;
            } else if (line[0] != '+') {
                return {};
            }
        }

        if (helping::checkString(line + start, size - start)) {
            res.exponent = size - start - 1;
            for (int i = size - 1; i >= start; --i) {
                if (isdigit(line[i])) {
                    res.significand.push_back(line[i] - '0');
                } else {
                    res.exponent = i - start - 1;
                }
            }

            res.removeZeros();
            return res;
        }
    }

    LargeNumber literals::operator ""_LN(long double ldNum) {
        std::string strNum = std::to_string(ldNum);
        return literals::operator ""_LN(strNum.c_str(), strNum.length());
    }


    void LargeNumber::removeZeros() {
        while (significand.size() > 1 && significand.back() == 0) {
            significand.pop_back();
            exponent--;
        }

        while (significand.size() > 1 && significand.front() == 0) {
            significand.erase(significand.begin());
        }
    }

    std::ostream &operator<<(std::ostream &stream, const LargeNumber &a) {
        stream << a.toString();
        return stream;
    }

    std::string LargeNumber::toString() const {
        long long size = significand.size();
        std::string line;
        if (sign == -1) {
            line.push_back('-');
        }

        if (exponent < 0) {
            line.append("0.");
            line.append(std::string(-exponent - 1, '0'));
            for (long long i = size - 1; i >= 0; --i) {
                line.append(std::to_string(significand[i]));
            }
        } else {
            for (long long i = size - 1; i >= size - exponent - 1; --i) {
                line.append(std::to_string(significand[i]));
            }
            line.push_back('.');
            for (long long i = size - exponent - 2; i >= 0; --i) {
                line.append(std::to_string(significand[i]));
            }
        }
        return line;
    }

    LargeNumber LargeNumber::operator-() const {
        LargeNumber res;
        res.sign = -sign;
        res.significand = significand;
        res.exponent = exponent;
        return res;
    }

    LargeNumber LargeNumber::operator+(const LargeNumber &other) const {
        if (sign != other.sign) {
            return *this - (-other);
        }

        long long firstExp = exponent;
        long long secondExp = other.exponent;
        long long firstSize = significand.size();
        long long secondSize = other.significand.size();
        long long firstMin = firstExp - firstSize + 1;
        long long secondMin = secondExp - secondSize + 1;

        long long resSize = std::max(firstExp, secondExp) - std::min(firstMin, secondMin);

        LargeNumber res;
        res.sign = sign;
        res.significand.resize(resSize);
        res.exponent = std::max(firstExp, secondExp);

        for (long long i = 0; i < resSize; ++i) {
            long long digPos = i - resSize + res.exponent + 1;
            if (digPos >= firstMin && digPos <= firstExp) {
                res.significand[i] += significand[digPos + firstSize - firstExp - 1];
            }
            if (digPos >= secondMin && digPos <= secondExp) {
                res.significand[i] += other.significand[digPos + secondSize - secondExp - 1];
            }
            if (res.significand[i] >= 10) {
                res.significand[i + 1] += res.significand[i] / NUM_SYSTEM;
                res.significand[i] %= NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::operator-(const LargeNumber &other) const {
        if (sign != other.sign) {
            return *this + (-other);
        }
        if (sign == -1) {
            return -other - (-*this);
        }
        if (other > *this) {
            return -(other - *this);
        }

        long long firstExp = exponent;
        long long secondExp = other.exponent;
        long long firstSize = significand.size();
        long long secondSize = other.significand.size();
        long long firstMin = firstExp - firstSize + 1;
        long long secondMin = secondExp - secondSize + 1;

        long long resSize = std::max(firstExp, secondExp) - std::min(firstMin, secondMin);

        LargeNumber res;
        res.sign = 1;
        res.significand.resize(resSize);
        res.exponent = std::max(firstExp, secondExp);

        for (long long i = 0; i < resSize; ++i) {
            long long digPos = i - resSize + res.exponent + 1;
            if (digPos >= firstMin && digPos <= firstExp) {
                res.significand[i] += significand[digPos + firstSize - firstExp - 1];
            }
            if (digPos >= secondMin && digPos <= secondExp) {
                res.significand[i] -= other.significand[digPos + secondSize - secondExp - 1];
            }
            if (res.significand[i] < 0) {
                res.significand[i + 1]--;
                res.significand[i] += NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::operator*(const LargeNumber &other) const {
        if (*this == LargeNumber(0) || other == LargeNumber(0) ||
            *this == -LargeNumber(0) || other == -LargeNumber(0)) {
            return {};
        }
        long long firstSize = significand.size();
        long long secondSize = other.significand.size();

        LargeNumber res;
        res.sign = sign * other.sign;

        std::vector<complex_t> fa(significand.begin(), significand.end());
        std::vector<complex_t> fb(other.significand.begin(), other.significand.end());
        size_t n = 1;
        while (n < std::max(firstSize, secondSize)) {
            n <<= 1;
        }
        n <<= 1;

        fa.resize(n);
        fb.resize(n);
        res.exponent = n / 2 - (firstSize - exponent) + n / 2 - (secondSize - other.exponent) + 1;

        helping::fft(fa, false);
        helping::fft(fb, false);
        for (size_t i = 0; i < n; ++i) {
            fa[i] *= fb[i];
        }
        helping::fft(fa, true);

        res.significand.resize(n);
        res.significand.push_back(0);
        res.exponent++;
        for (size_t i = 0; i < n; ++i) {
            res.significand[i] += (base) (fa[i].real() + 0.5);
            if (res.significand[i] >= 10) {
                res.significand[i + 1] += res.significand[i] / NUM_SYSTEM;
                res.significand[i] %= NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::operator/(const LargeNumber &other) const {
        return LargeNumber();
    }

    bool LargeNumber::operator>(const LargeNumber &other) const {
        if (sign != other.sign) {
            return sign > other.sign;
        }
        if (sign == -1) {
            return -*this < -other;
        }

        if (significand.size() == 1 && significand[0] == 0 ||
            other.significand.size() == 1 && other.significand[0] == 0) {
            return !(significand.size() == 1 && significand[0] == 0);
        }

        if (exponent != other.exponent) {
            return exponent > other.exponent;
        }

        size_t i = 0;
        size_t minSize = std::min(significand.size(), other.significand.size());
        size_t thisSize = significand.size();
        size_t otherSize = other.significand.size();
        for (; i < minSize; ++i) {
            if (significand[thisSize - 1 - i] != other.significand[otherSize - 1 - i]) {
                return significand[thisSize - 1 - i] > other.significand[otherSize - 1 - i];
            }
        }

        return thisSize > otherSize;
    }
}