#ifndef LONG_ARITHM_LARGENUMBERS_H
#define LONG_ARITHM_LARGENUMBERS_H

#endif

#include <iostream>
#include <vector>
#include <string>

typedef long long base;

namespace LargeNumbers {
    class LargeNumber {
    public:
        LargeNumber();

        explicit LargeNumber(const long double &);

        std::vector<base> significand;
        long long exponent;
        char sign;

        void removeZeros();

        std::string toString() const;

        friend std::ostream &operator<<(std::ostream &, const LargeNumber &);

        LargeNumber operator-() const;

        LargeNumber operator+(const LargeNumber &) const;

        LargeNumber operator-(const LargeNumber &) const;

        LargeNumber operator*(const LargeNumber &) const;

        LargeNumber operator/(const LargeNumber &) const;

        bool operator>(const LargeNumber &) const;

        std::strong_ordering operator<=>(const LargeNumber &) const = default;
    };

    namespace literals {
        LargeNumber operator ""_LN(const char *, size_t);

        LargeNumber operator ""_LN(long double);
    }
}