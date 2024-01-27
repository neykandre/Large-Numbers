#ifndef LONG_ARITHM_LARGENUMBERS_H
#define LONG_ARITHM_LARGENUMBERS_H

#endif

#include <vector>
#include <string>

namespace LargeNumbers {
    struct LargeNumber {
        std::vector<int> significand;
        long long offset;
        char sign;

        LargeNumber();

        LargeNumber operator-();

        LargeNumber operator+(const LargeNumber& other);
        LargeNumber operator-(const LargeNumber& other);
        LargeNumber operator*(const LargeNumber& other);
        LargeNumber operator/(const LargeNumber& other);

        bool operator>(const LargeNumber& other);
        bool operator<(const LargeNumber& other);
        bool operator==(const LargeNumber& other);
        bool operator>=(const LargeNumber& other);
        bool operator<=(const LargeNumber& other);
        bool operator!=(const LargeNumber& other);

    };

    LargeNumber& operator ""_LN(const char*);
}
