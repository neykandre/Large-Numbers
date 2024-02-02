#ifndef LONG_ARITHM_LARGENUMBERS_H
#define LONG_ARITHM_LARGENUMBERS_H

#endif

#include <iostream>
#include <vector>
#include <string>

typedef long long int base;

namespace LargeNumbers {
    class LargeNumber {
    private:
        std::vector<base> significand;
        long long exponent;
        char sign;

        void removeZeros();

        bool isEqZero() const;

        LargeNumber inverse(long long) const;

    public:

        LargeNumber();

        explicit LargeNumber(const char *);

        std::string toString() const;

        void setPrec(long long);

        friend std::ostream &operator<<(std::ostream &, const LargeNumber &);

        LargeNumber operator-() const;

        LargeNumber operator+(const LargeNumber &) const;

        LargeNumber operator-(const LargeNumber &) const;

        LargeNumber operator*(const LargeNumber &) const;

        LargeNumber operator/(const LargeNumber &) const;

        bool operator>(const LargeNumber &) const;

        bool operator==(const LargeNumber &) const;

        std::strong_ordering operator<=>(const LargeNumber &) const;
    };

    namespace literals {
        LargeNumber operator ""_LN(const char *);
    }
}