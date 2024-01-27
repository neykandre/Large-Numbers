#ifndef LONG_ARITHM_LARGENUMBERS_H
#define LONG_ARITHM_LARGENUMBERS_H

#endif

#include <vector>
#include <string>
#include <iostream>

namespace LargeNumbers {
    struct LargeNumber {
        std::vector<int> significand;
        long long offset;
        char sign;

        LargeNumber();
        void removeZeros();
        std::string toString() const;

        friend std::ostream& operator<<(std::ostream&, const LargeNumber&);

        LargeNumber operator-() const;

        LargeNumber operator+(const LargeNumber&) const;
        LargeNumber operator-(const LargeNumber&) const;
        LargeNumber operator*(const LargeNumber&) const;
        LargeNumber operator/(const LargeNumber&) const;

        bool operator>(const LargeNumber&) const;
        bool operator<(const LargeNumber&) const;
        bool operator==(const LargeNumber&) const;
        bool operator>=(const LargeNumber&) const;
        bool operator<=(const LargeNumber&) const;
        bool operator!=(const LargeNumber&) const;
    };

    namespace literals {
        LargeNumber operator ""_LN(const char*, size_t);
        LargeNumber operator ""_LN(long double);
    }
}