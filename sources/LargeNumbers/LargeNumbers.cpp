#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <cmath>

#include "MathFunctions.h"
#include "LargeNumbers.h"

#define NUM_SYSTEM 10
#define SIZE_FOR_FFT (1000 * 1000)

typedef std::complex<double> complex_t;
using namespace LargeNumbers::literals;

long long defaultPrecision = 100;

namespace LargeNumbers {

    void setGlobalPrecision(long long precision) {
        defaultPrecision = precision;
    }

    long long getGlobalPrecision() {
        return defaultPrecision;
    }

    LargeNumber::LargeNumber() {
        sign = 1;
        exponent = 0;
        significand = std::vector<base>(1, 0);
    }

    LargeNumber::LargeNumber(long double num) {
        *this = LargeNumber(std::to_string(num).c_str());
    }

    LargeNumber::LargeNumber(const char *line) {
        size_t size = std::string(line).size();

        sign = 1;
        int start = 0;

        if (line[0] == '-') {
            sign = -1;
            start++;
        }

        exponent = static_cast<long long>(size) - start - 1;
        for (long long i = static_cast<long long>(size) - 1; i >= start; --i) {
            if (isdigit(line[i])) {
                significand.push_back(line[i] - '0');
            } else {
                exponent = i - start - 1;
            }
        }

        removeZeros();
    }

    bool LargeNumber::isEqZero() const {
        for (auto &x: significand) {
            if (x != 0) {
                return false;
            }
        }
        return true;
    }

    void LargeNumber::setPrecision(long long precision) {
        if (precision < getPrecision()) {
            long long newSize = std::max(exponent + 1 + precision, 0ll);
            std::reverse(significand.begin(), significand.end());
            significand.resize(newSize);
            std::reverse(significand.begin(), significand.end());
            if (newSize == 0) {
                significand.push_back(0);
            }
            removeZeros();
        }
    }

    void LargeNumber::removeZeros() {
        while (significand.size() > 1 && significand.back() == 0) {
            significand.pop_back();
            exponent--;
        }

        while (significand.size() > 1 && significand.front() == 0) {
            significand.erase(significand.begin());
        }

        if (significand.size() == 1 && significand.back() == 0) {
            exponent = 0;
        }
        if (isEqZero()) {
            sign = 1;
        }
    }

    std::string LargeNumber::toString() const {
        long long size = static_cast<long long> (significand.size());
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

    LargeNumber LargeNumber::getInverse(long long precision) const {
        return inverse(precision);
    }

    long long LargeNumber::getExp() const {
        return exponent;
    }

    long long LargeNumber::getPrecision() const {
        return static_cast<long long>(significand.size()) - exponent - 1;
    }

    LargeNumber LargeNumber::defaultMultiply(const LargeNumber &other) const {
        LargeNumbers::LargeNumber res;
        res.sign = sign * other.sign;
        res.exponent = exponent + other.exponent + 1;
        size_t resSize = significand.size() + other.significand.size();
        res.significand.resize(resSize);

        for (size_t i = 0; i < significand.size(); ++i) {
            for (size_t j = 0; j < other.significand.size(); ++j) {
                res.significand[i + j] += significand[i] * other.significand[j];
                res.significand[i + j + 1] += res.significand[i + j] / NUM_SYSTEM;
                res.significand[i + j] %= NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::fftMultiply(const LargeNumber &other) const {
        long long firstSize = static_cast<long long> (significand.size());
        long long secondSize = static_cast<long long> (other.significand.size());

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
        res.exponent = static_cast<long long>(n) - (firstSize - exponent) - (secondSize - other.exponent) + 1;

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
            res.significand[i] += std::lround(fa[i].real());
            if (res.significand[i] >= 10) {
                res.significand[i + 1] += res.significand[i] / NUM_SYSTEM;
                res.significand[i] %= NUM_SYSTEM;
            }
        }

        res.removeZeros();
        return res;
    }

    LargeNumber LargeNumber::inverse(long long prec) const {
        if (isEqZero()) {
            throw std::invalid_argument("Dividing by 0");
        }

        LargeNumber num = 1_LN;
        LargeNumber denom = *this;
        denom.sign = 1;
        LargeNumber prevNum;

        denom.exponent = -1;

        LargeNumber res;
        res.sign = sign;
        res.exponent = -exponent - 1;
        res.significand.clear();

        while (static_cast<long long> (res.significand.size()) - res.exponent <= prec || res.significand.empty()) {
            prevNum = num;

            int curDig = 0;
            while (denom <= num) {
                curDig++;
                num = num - denom;
            }
            res.significand.push_back(curDig);
            num.exponent++;

            if (num == prevNum && curDig == 9) {
                res.significand.pop_back();
                if (!res.significand.empty()) {
                    res.significand.pop_back();
                }
                res.significand.push_back(1);
                res.exponent++;
                break;
            }
        }
        std::reverse(res.significand.begin(), res.significand.end());
        res.setPrecision(prec);
        res.removeZeros();
        return res;
    }

    LargeNumber literals::operator ""_LN(const char *line) {
        return LargeNumber(line);
    }

    std::ostream &operator<<(std::ostream &stream, const LargeNumber &a) {
        stream << a.toString();
        return stream;
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
        long long firstSize = static_cast<long long> (significand.size());
        long long secondSize = static_cast<long long> (other.significand.size());
        long long firstMin = firstExp - firstSize + 1;
        long long secondMin = secondExp - secondSize + 1;

        long long resSize = std::max(firstExp, secondExp) + 2 - std::min(firstMin, secondMin);

        LargeNumber res;
        res.sign = sign;
        res.significand.resize(resSize);
        res.exponent = std::max(firstExp, secondExp) + 1;

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
        long long firstSize = static_cast<long long> (significand.size());
        long long secondSize = static_cast<long long> (other.significand.size());
        long long firstMin = firstExp - firstSize + 1;
        long long secondMin = secondExp - secondSize + 1;

        long long resSize = std::max(firstExp, secondExp) + 2 - std::min(firstMin, secondMin);

        LargeNumber res;
        res.sign = 1;
        res.significand.resize(resSize);
        res.exponent = std::max(firstExp, secondExp) + 1;

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

        LargeNumber res;
        if (significand.size() * other.significand.size() < SIZE_FOR_FFT) {
            res = defaultMultiply(other);
        } else {
            res = fftMultiply(other);
        }
        return res;
    }

    LargeNumber LargeNumber::operator/(const LargeNumber &other) const {
        if (other.isEqZero()) {
            throw std::invalid_argument("Dividing by 0");
        }

        LargeNumber num = *this;
        LargeNumber denom_inv = other.getInverse(getGlobalPrecision() + exponent + 10);

        LargeNumber res = num * denom_inv;
        res.setPrecision(getGlobalPrecision());
        return res;
    }

    LargeNumber LargeNumber::operator+=(const LargeNumber &other) {
        return *this = *this + other;
    }

    LargeNumber LargeNumber::operator-=(const LargeNumber &other) {
        return *this = *this - other;
    }

    LargeNumber LargeNumber::operator*=(const LargeNumber &other) {
        return *this = *this * other;
    }

    LargeNumber LargeNumber::operator/=(const LargeNumber &other) {
        return *this = *this / other;
    }

    bool LargeNumber::operator>(const LargeNumber &other) const {
        if (isEqZero() && other.isEqZero()) {
            return false;
        }
        if (isEqZero()) {
            return other.sign == -1;
        }
        if (other.isEqZero()) {
            return sign == 1;
        }

        if (sign != other.sign) {
            return sign > other.sign;
        }
        if (sign == -1) {
            return -other > -*this;
        }

        if (exponent != other.exponent) {
            return exponent > other.exponent;
        }

        size_t minSize = std::min(significand.size(), other.significand.size());
        size_t firstSize = significand.size();
        size_t secondSize = other.significand.size();
        for (size_t i = 0; i < minSize; ++i) {
            if (significand[firstSize - 1 - i] != other.significand[secondSize - 1 - i]) {
                return significand[firstSize - 1 - i] > other.significand[secondSize - 1 - i];
            }
        }
        return firstSize > secondSize;
    }

    bool LargeNumbers::LargeNumber::operator==(const LargeNumbers::LargeNumber &other) const {
        if (isEqZero() && other.isEqZero()) {
            return true;
        }
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