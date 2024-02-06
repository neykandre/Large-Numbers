#include <iostream>
#include <ctime>
#include <string>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;


int main(int argc, char* argv[]) {
    int precision = 100;
    if (argc > 0) {
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