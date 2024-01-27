#include <vector>
#include <string>
#include <iostream>
#include "LargeNumbers.h"
#include <algorithm>

#define VECTOR_ELEM_MOD 10

LargeNumbers::LargeNumber::LargeNumber() {
    sign = 1;
    offset = 1;
    significand = std::vector<int>(1, 0);
}

LargeNumbers::LargeNumber LargeNumbers::literals::operator ""_LN(const char *line, size_t size) {
    LargeNumbers::LargeNumber res = LargeNumber();
    int start;

    if (line[0] == '-') {
        res.sign = -1;
        start = 1;
    } else {
        res.sign = 1;
        start = 0;
    }

    res.offset = size - start;
    for (int i = size - 1; i >= start; --i) {
        if (line[i] == '.') {
            res.offset = i - start;
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
//                res.offset = j - start;
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
    while (significand.size() > 1 && significand.front() == 0) {
        significand.erase(significand.begin());
    }

    while (significand.size() > 1 && significand.back() == 0) {
        significand.pop_back();
        offset--;
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

    if (offset <= 0) {
        line.push_back('0');
        line.push_back('.');
        for (int i = 0; i < -offset; ++i) {
            line.push_back('0');
        }
        for (int i = significand.size() - 1; i >= 0; --i) {
            line.push_back(significand[i] + '0');
        }
    } else {
        for (int i = 0; i < offset; ++i) {
            line.push_back(significand[significand.size() - 1 - i] + '0');
        }
        line.push_back('.');
        for (int i = offset; i < significand.size(); ++i) {
            line.push_back(significand[significand.size() - 1 - i] + '0');
        }
    }
    return line;
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator-() const {
    LargeNumbers::LargeNumber res = LargeNumber();
    res.sign = -sign;
    res.significand = significand;
    res.offset = offset;
    return res;
}

//LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator+(const LargeNumbers::LargeNumber &other) const {
//    if (this->sign == -1) {
//        return other - (-*this);
//    }
//    if (other.sign == -1) {
//        return *this - (-other);
//    }
//
//    size_t thisSize = this->significand.size();
//    size_t otherSize = other.significand.size();
//    size_t thisPrec = thisSize - this->offset;
//    size_t otherPrec = otherSize - other.offset;
//    size_t resSize = std::max(this->offset, other.offset) + std::max(thisPrec, otherPrec) + 1;
//
//    LargeNumbers::LargeNumber res;
//    res.sign = 1;
//    res.offset = std::max(this->offset, other.offset) + 1;
//    res.significand = std::vector<int> (resSize, 0);
//
//
//}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator-(const LargeNumbers::LargeNumber &other) const {
    return LargeNumbers::LargeNumber();
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator*(const LargeNumbers::LargeNumber &other) const {
    return LargeNumbers::LargeNumber();
}

LargeNumbers::LargeNumber LargeNumbers::LargeNumber::operator/(const LargeNumbers::LargeNumber &other) const {
    return LargeNumbers::LargeNumber();
}

bool LargeNumbers::LargeNumber::operator>(const LargeNumbers::LargeNumber &other) const {
    if (this->sign != other.sign) {
        return this->sign > other.sign;
    }
    if (this->sign == -1) {
        return -*this < -other;
    }

    if (this->significand.size() == 1 && this->significand[0] == 0 ||
        other.significand.size() == 1 && other.significand[0] == 0) {
        return !(this->significand.size() == 1 && this->significand[0] == 0);
    }

    if (this->offset != other.offset) {
        return this->offset > other.offset;
    }

    size_t i = 0;
    size_t minSize = std::min(this->significand.size(), other.significand.size());
    size_t thisSize = this->significand.size();
    size_t otherSize = other.significand.size();
    for (; i < minSize; ++i) {
        if (this->significand[thisSize - 1 - i] != other.significand[otherSize - 1 - i]) {
            return this->significand[thisSize - 1 - i] > other.significand[otherSize - 1 - i];
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


