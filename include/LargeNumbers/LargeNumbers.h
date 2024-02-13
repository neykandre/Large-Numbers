#ifndef LONG_ARITHM_LARGENUMBERS_H
#define LONG_ARITHM_LARGENUMBERS_H

#endif

#include <iostream>
#include <vector>
#include <string>

typedef int32_t base;

namespace LargeNumbers {

    void setGlobalPrecision(long long);

    long long getGlobalPrecision();

    class LargeNumber {
    private:
        std::vector<base> significand{};
        long long exponent{};
        int sign{};

        void removeZeros();

        bool isEqZero() const;

        LargeNumber inverse(long long) const;

        LargeNumber defaultMultiply(const LargeNumber &) const;

        LargeNumber fftMultiply(const LargeNumber &) const;

    public:

        LargeNumber();

        explicit LargeNumber(long double);

        explicit LargeNumber(const char *);

        std::string toString() const;

        void setPrecision(long long);

        LargeNumber getInverse(long long = getGlobalPrecision()) const;

        long long getExp() const;

        long long getPrecision() const;

        friend std::ostream &operator<<(std::ostream &, const LargeNumber &);

        LargeNumber operator-() const;

        LargeNumber operator+(const LargeNumber &) const;

        LargeNumber operator-(const LargeNumber &) const;

        LargeNumber operator*(const LargeNumber &) const;

        LargeNumber operator/(const LargeNumber &) const;

        LargeNumber operator+=(const LargeNumber &);

        LargeNumber operator-=(const LargeNumber &);

        LargeNumber operator*=(const LargeNumber &);

        LargeNumber operator/=(const LargeNumber &);

        bool operator>(const LargeNumber &) const;

        bool operator==(const LargeNumber &) const;

        std::strong_ordering operator<=>(const LargeNumber &) const;
    };

    namespace literals {
        LargeNumber operator ""_LN(const char *);
    }
}