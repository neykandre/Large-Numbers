#include <iostream>
#include <vector>
#include <string>
#include <complex>

#include "MathFunctions.h"
#include "LargeNumbers.h"

#define NUM_SYSTEM 10
#define DEFAULT_PREC 10

typedef std::complex<double> complex_t;
using namespace LargeNumbers::literals;

namespace LargeNumbers {
    LargeNumber::LargeNumber() {
        sign = 1;
        exponent = 0;
        significand = std::vector<base>(1, 0);
    }

    LargeNumber::LargeNumber(const char *line) {
        size_t size = std::string(line).size();

        sign = 1;
        int start = 0;

        if (line[0] == '-') {
            sign = -1;
            start++;
        }

        exponent = size - start - 1;
        for (int i = size - 1; i >= start; --i) {
            if (isdigit(line[i])) {
                significand.push_back(line[i] - '0');
            } else {
                exponent = i - start - 1;
            }
        }

        removeZeros();
    }

    bool LargeNumber::isEqZero() const {
        return *this == 0_LN || *this == -0_LN;
    }

    LargeNumber LargeNumber::inverse(long long prec) const {
        if (prec < 0) {
            prec = 0;
        }
        if (isEqZero()) {
            throw std::invalid_argument("Dividing by 0");
        }
        if (exponent != -1) {
            throw std::invalid_argument("Not matching number representation to inverting");
        }

        LargeNumber num = 1_LN;
        LargeNumber denom = *this;

        LargeNumber res;
        res.sign = sign;
        res.significand.clear();
        while (res.significand.size() <= prec) {
            int curDig = 0;
            while (denom < num) {
                curDig++;
                num = num - denom;
            }
            res.significand.push_back(curDig);
            num.exponent++;
        }
        std::reverse(res.significand.begin(), res.significand.end());
        res.exponent = 0;
        return res;
    }

    void LargeNumber::setPrec(long long prec) {
        long long newSize = exponent + 1 + prec;
        std::reverse(significand.begin(), significand.end());
        significand.resize(newSize);
        std::reverse(significand.begin(), significand.end());
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

    LargeNumber literals::operator ""_LN(const char *line) {
        return LargeNumber(line);
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
            for (long long i = size - 1; i >= std::min(0LL, size - exponent - 1); --i) {
                if (i == size - exponent - 2) {
                    line.push_back('.');
                }
                if (i >= 0) {
                    line.append(std::to_string(significand[i]));
                } else {
                    line.push_back('0');
                }
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

        long long resSize = std::max(firstExp, secondExp) + 1 - std::min(firstMin, secondMin);

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

        long long resSize = std::max(firstExp, secondExp) + 1 - std::min(firstMin, secondMin);

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
        if (isEqZero() || other.isEqZero()) {
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

        MyMath::fft(fa, false);
        MyMath::fft(fb, false);
        for (size_t i = 0; i < n; ++i) {
            fa[i] *= fb[i];
        }

        MyMath::fft(fa, true);

        res.significand.resize(n);
        res.significand.push_back(0);
        res.exponent++;
        for (size_t i = 0; i < n; ++i) {
            res.significand[i] += static_cast<long long>(fa[i].real() + 0.5);
            if (res.significand[i] >= 10) {
                res.significand[i + 1] += res.significand[i] / NUM_SYSTEM;
                res.significand[i] %= NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::operator/(const LargeNumber &other) const {
        if (other.isEqZero()) {
            throw std::invalid_argument("Dividing by 0");
        }

        LargeNumber num = *this;
        LargeNumber denom = other;

        denom.exponent = -1;
        num.exponent = exponent - (other.exponent - denom.exponent);

        LargeNumber res = num * denom.inverse(DEFAULT_PREC + num.exponent);
        res.setPrec(DEFAULT_PREC);
        return res;
    }

    bool LargeNumber::operator>(const LargeNumber &other) const {
        if (sign != other.sign) {
            return sign > other.sign;
        }
        if (sign == -1) {
            return -other > -*this;
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

    bool LargeNumbers::LargeNumber::operator==(const LargeNumbers::LargeNumber &other) const {
        return (sign == other.sign && exponent == other.exponent && significand == other.significand);
    }

    std::strong_ordering LargeNumber::operator<=>(const LargeNumber &other) const {
        if (*this == other) {
            return std::strong_ordering::equal;
        }
        if (*this > other) {
            return std::strong_ordering::greater;
        }
        return std::strong_ordering::less;
    }
}