cmake_minimum_required(VERSION 3.27)
project(LargeNumbers)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_library(MyMath sources/MathFunctions.cpp)