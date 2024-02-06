#include <iostream>
#include <ctime>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;


int main() {
    LargeNumbers::setGlobalPrecision(1000);

    std::clock_t start = std::clock();
    LargeNumbers::LargeNumber myPi = LargeNumbers::getPi();
    std::clock_t end = std::clock();

    std::cout << myPi << std::endl;
    std::cout << "Precision: " << LargeNumbers::getGlobalPrecision() << std::endl;
    std::cout << 1000.0 * (end - start) / CLOCKS_PER_SEC << " ms" << std::endl;
}