cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
include_directories(MathLib/include)

add_subdirectory(MathLib)

add_library(LargeNumbersLib sources/LargeNumbers.cpp)

target_link_libraries(LargeNumbersLib PRIVATE MyMath)

add_subdirectory(test)