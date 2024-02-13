#include <iostream>
#include <ctime>
#include <string>
#include <cmath>

#include <MagicNums.h>
#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

namespace LargeNumbers {
    void binarySplit(long long a, long long b, LargeNumber &P, LargeNumber &Q, LargeNumber &R) {
        if (b == a + 1) {
            P = LargeNumber(-(6 * a - 5) * (2 * a - 1) * (6 * a - 1));
            Q = LargeNumber(10939058860032000) * LargeNumber(pow(a, 3));
            R = P * LargeNumber(545140134 * a + 13591409);
        } else {
            long long m = (a + b) / 2;
            LargeNumber Pl, Ql, Rl;
            LargeNumber Pr, Qr, Rr;
            binarySplit(a, m, Pl, Ql, Rl);
            binarySplit(m, b, Pr, Qr, Rr);

            P = Pl * Pr;
            Q = Ql * Qr;
            R = Qr * Rl + Pl * Rr;
        }
    }

    LargeNumber getPi(long long int precision) {
        LargeNumber P, Q, R;
        binarySplit(1, std::max(precision / 10, static_cast<long long> (2)), P, Q, R);
        LargeNumber num = LargeNumber(MAGIC_PI_NUM);
        num.setPrecision(precision + 1);
        num *= Q;
        num *= (LargeNumber("13591409") * Q + R).getInverse(precision + num.getExp() + 1);
        num.setPrecision(precision);
        return num;
    }
}


int main(int argc, char* argv[]) {
    int precision = 100;
    if (argc > 1) {
        precision = std::stoi(std::string(argv[1]));
    }
    LargeNumbers::setGlobalPrecision(precision);

    std::clock_t start = std::clock();
    LargeNumbers::LargeNumber myPi = LargeNumbers::getPi();
    std::clock_t end = std::clock();

    std::cout << myPi << std::endl;
    std::cout << "Precision: " << LargeNumbers::getGlobalPrecision() << std::endl;
    std::cout << 1000.0 * (end - start) / CLOCKS_PER_SEC << " ms" << std::endl;
    return 0;
}