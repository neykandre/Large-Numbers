#include <iostream>
#include <ctime>
#include <string>
#include <cmath>

#include <MagicNums.h>
#include "LargeNumbers.h"

using namespace LargeNumbers::literals;


void binarySplit(long long a, long long b, LargeNumbers::LargeNumber &P, LargeNumbers::LargeNumber &Q,
                 LargeNumbers::LargeNumber &R) {
    if (b == a + 1) {
        P = LargeNumbers::LargeNumber(-(6 * a - 5) * (2 * a - 1) * (6 * a - 1));
        Q = LargeNumbers::LargeNumber(10939058860032000) * LargeNumbers::LargeNumber(pow(a, 3));
        R = P * LargeNumbers::LargeNumber(545140134 * a + 13591409);
    } else {
        long long m = (a + b) / 2;
        LargeNumbers::LargeNumber Pl, Ql, Rl;
        LargeNumbers::LargeNumber Pr, Qr, Rr;
        binarySplit(a, m, Pl, Ql, Rl);
        binarySplit(m, b, Pr, Qr, Rr);

        P = Pl * Pr;
        Q = Ql * Qr;
        R = Qr * Rl + Pl * Rr;
    }
}

LargeNumbers::LargeNumber getPi(long long int precision = LargeNumbers::getGlobalPrecision()) {
    LargeNumbers::LargeNumber P, Q, R;
    binarySplit(1, std::max(precision / 10, static_cast<long long> (2)), P, Q, R);
    LargeNumbers::LargeNumber num = LargeNumbers::LargeNumber(MAGIC_PI_NUM);
    num.setPrecision(precision + 1);
    num *= Q;
    num *= (LargeNumbers::LargeNumber("13591409") * Q + R).getInverse(precision + num.getExp() + 2);
    num.setPrecision(precision);
    return num;
}


int main(int argc, char *argv[]) {
    int precision = 100;
    if (argc > 1) {
        precision = std::stoi(std::string(argv[1]));
    }
    LargeNumbers::setGlobalPrecision(precision);

    std::clock_t start = std::clock();
    LargeNumbers::LargeNumber myPi = getPi();
    std::clock_t end = std::clock();

    std::cout << myPi << std::endl;
    std::cout << "Precision: " << LargeNumbers::getGlobalPrecision() << std::endl;
    std::cout << 1000.0 * (end - start) / CLOCKS_PER_SEC << " ms" << std::endl;
    return 0;
}