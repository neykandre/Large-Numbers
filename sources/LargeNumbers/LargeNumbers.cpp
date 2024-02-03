#include <iostream>
#include <vector>
#include <string>
#include <complex>

#include "MathFunctions.h"
#include "LargeNumbers.h"

#define NUM_SYSTEM 10
#define DEFAULT_PREC 10
#define SIZE_FOR_FFT 1000

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
        return *this == 0_LN || *this == -0_LN;
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

    LargeNumber LargeNumber::inverse(long long prec = DEFAULT_PREC) const {
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
        res.exponent = - exponent - 1;
        res.significand.clear();

        while (static_cast<long long> (res.significand.size()) - res.exponent <= prec || res.significand.empty()) {
            prevNum = num;

            int curDig = 0;
            while (denom < num) {
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
        return res;
    }

//    #todo: reBASE to 2^64, with base 10 too slow
//    LargeNumber LargeNumber::inverseNewton(long long prec = DEFAULT_PREC) const {
//        if (isEqZero()) {
//            throw std::invalid_argument("Dividing by 0");
//        }
//
//        long long iters = sqrt(prec) + 1;
//        LargeNumber denom = *this;
//
//        denom.exponent = -1;
//        denom.sign = 1;
//
//        LargeNumber res = 1_LN;
//        LargeNumber prevRes = res;
//
//
//
//        while ((res + 1_LN) * denom < 1_LN) {
//            res += 1_LN;
//        }
//        res = 48_LN / 17_LN - 32_LN / 17_LN * denom;
//
//        while (-(res - prevRes).exponent < prec + exponent + 1) {
//            prevRes = res;
//            res = res * (2_LN - denom * res);
//            res.setPrec(prec + exponent + 7);
//            prevRes.setPrec(prec + exponent + 7);
//        }
//
//        while (iters--) {
//            res *= 2_LN - denom * res;
//            res.setPrec(prec + exponent + 1);
//        }
//
//        res.sign = sign;
//        res.exponent = -exponent - 1;
//        res.setPrec(prec);
//        return res;
//    }

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

        if (significand.size() + other.significand.size() < SIZE_FOR_FFT) {
            return defaultMultiply(other);
        }

        else {
            return fftMultiply(other);
        }
    }

    LargeNumber LargeNumber::operator/(const LargeNumber &other) const {
        if (other.isEqZero()) {
            throw std::invalid_argument("Dividing by 0");
        }

        LargeNumber num = *this;
        LargeNumber denom_inv = other.inverse(DEFAULT_PREC + exponent + 1);

//        num.setPrec(DEFAULT_PREC + denom_inv.exponent + 1);

        LargeNumber res = num * denom_inv;
        res.setPrec(DEFAULT_PREC);
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

//    LargeNumber LargeNumber::getNewtonInverse(long long prec) const {
//        return inverseNewton(prec);
//    }

    LargeNumber LargeNumber::getInverse(long long prec) const {
        return inverse(prec);
    }
}