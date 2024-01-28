#include <iostream>
#include <vector>
#include <string>

#include "LargeNumbers.h"

#define NUM_SYSTEM 10

LargeNumbers::LargeNumber::LargeNumber() {
    sign = 1;
    exponent = 0;
    significand = std::vector<int>();
}

LargeNumbers::LargeNumber LargeNumbers::literals::operator ""_LN(const char *line, size_t size) {
    LargeNumbers::LargeNumber res;
    int start;

    if (line[0] == '-') {
        res.sign = -1;
        start = 1;
    } else {
        res.sign = 1;
        start = 0;
    }

    res.exponent = size - start - 1;
    for (int i = size - 1; i >= start; --i) {
        if (line[i] == '.') {
            res.exponent = i - start - 1;
        } else if (isdigit(line[i])) {
            res.significand.push_back(line[i] - '0');
        } else {
            return {};
        }
    }

    res.removeZeros();
    return res;

//    for (int i = size - 1; i >= start; i -= 4) {
//        for (int j = i; j >= start && j > i - 4; --j) {
//            if (line[j] == '.') {
//                res.exponent = j - start;
//            }
//            else if (isdigit(line[j])){
//                int addNum = line[j] - '0';
//                for (int p = 0; p < i - j; p++) {
//                    addNum *= 10;
//                }
//
//                if (j == i) {
//                    res.significand.push_back(addNum);
//                }
//                else {
//                    res.significand.back() += addNum;
//                }
//            }
//            else {
//                return LargeNumber();
//            }
//        }
//    }
}

LargeNumbers::LargeNumber LargeNumbers::literals::operator ""_LN(long double ldNum) {
    std::string strNum = std::to_string(ldNum);
    return LargeNumbers::literals::operator ""_LN(strNum.c_str(), strNum.length());
}

void LargeNumbers::LargeNumber::removeZeros() {
    while (!significand.empty() && significand.back() == 0) {
        significand.pop_back();
        exponent--;
    }

    while (!significand.empty() && significand.front() == 0) {
        significand.erase(significand.begin());
    }

    if (significand.empty()) {
        exponent = 0;
        sign = 1;
    }
}


std::ostream& LargeNumbers::operator<<(std::ostream &stream, const LargeNumbers::LargeNumber &a) {
    stream << a.toString();
    return stream;
}

std::string LargeNumbers::LargeNumber::toString() const {
    std::string line;
    if (sign == -1) {
        line.push_back('-');
    }

    if (exponent < 0) {
        line.append("0.");
        line.append(std::string(-exponent - 1, '0'));
        for (long long i = significand.size() - 1; i >= 0; --i) {
            line.append(std::to_string(significand[i]));
        }
    } else {
        for (long long i = 0; i < exponent + 1; ++i) {
            line.append(std::to_string(significand[significand.size() - 1 - i]));
        }
        line.push_back('.');
        for (long long i = exponent + 1; i < significand.size(); ++i) {
            line.append(std::to_string(significand[significand.size() - 1 - i]));
        }
    }
    return line;
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator-() const {
    LargeNumbers::LargeNumber res;
    res.sign = -sign;
    res.significand = significand;
    res.exponent = exponent;
    return res;
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator+(const LargeNumbers::LargeNumber &other) const {
    if (sign != other.sign) {
        return *this - (-other);
    }

    long long firstExp = exponent;
    long long secondExp = other.exponent;
    std::vector<int> first(significand);
    std::vector<int> second(other.significand);
    long long maxExp = std::max(exponent, other.exponent);

    while (firstExp < maxExp) {
        first.push_back(0);
        firstExp++;
    }
    while (secondExp < maxExp) {
        second.push_back(0);
        secondExp++;
    }
    size_t maxSize = std::max(first.size(), second.size());
    while (first.size() < maxSize) {
        first.insert(first.begin(), 0);
    }
    while (second.size() < maxSize) {
        second.insert(second.begin(), 0);
    }

    size_t resSize = maxSize + 1;
    LargeNumbers::LargeNumber res;
    res.sign = sign;
    res.exponent = maxExp + 1;
    res.significand = std::vector<int> (resSize, 0);

    for (size_t i = 0; i < maxSize; i++) {
        res.significand[i] += first[i] + second[i];
        res.significand[i + 1] += res.significand[i] / NUM_SYSTEM;
        res.significand[i] %= NUM_SYSTEM;
    }
    res.removeZeros();
    return res;
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator-(const LargeNumbers::LargeNumber &other) const {
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
    std::vector<int> first(significand);
    std::vector<int> second(other.significand);
    long long maxExp = std::max(exponent, other.exponent);

    while (firstExp < maxExp) {
        first.push_back(0);
        firstExp++;
    }
    while (secondExp < maxExp) {
        second.push_back(0);
        secondExp++;
    }
    size_t maxSize = std::max(first.size(), second.size());
    while (first.size() < maxSize) {
        first.insert(first.begin(), 0);
    }
    while (second.size() < maxSize) {
        second.insert(second.begin(), 0);
    }

    size_t resSize = maxSize;
    LargeNumbers::LargeNumber res;
    res.sign = 1;
    res.exponent = maxExp;
    res.significand = std::vector<int> (resSize, 0);

    for (size_t i = 0; i < maxSize; ++i) {
        res.significand[i] = first[i] - second[i];
        if (res.significand[i] < 0) {
            first[i + 1]--;
            res.significand[i] += NUM_SYSTEM;
        }
    }

    res.removeZeros();
    return res;
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator*(const LargeNumbers::LargeNumber &other) const {
    LargeNumbers::LargeNumber res;
    res.sign = sign * other.sign;
    res.exponent = exponent + other.exponent + 1;
    size_t resSize = significand.size() + other.significand.size();
    res.significand = std::vector<int> (resSize, 0);

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

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator/(const LargeNumbers::LargeNumber &other) const {
    return LargeNumbers::LargeNumber();
}

bool LargeNumbers::LargeNumber::operator>(const LargeNumbers::LargeNumber &other) const {
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

bool LargeNumbers::LargeNumber::operator<(const LargeNumbers::LargeNumber &other) const {
    return other > *this;
}

bool LargeNumbers::LargeNumber::operator==(const LargeNumbers::LargeNumber &other) const {
    return !(*this > other || *this < other);
}

bool LargeNumbers::LargeNumber::operator>=(const LargeNumbers::LargeNumber &other) const {
    return !(*this < other);
}

bool LargeNumbers::LargeNumber::operator<=(const LargeNumbers::LargeNumber &other) const {
    return !(*this > other);
}

bool LargeNumbers::LargeNumber::operator!=(const LargeNumbers::LargeNumber &other) const {
    return !(*this == other);
}


