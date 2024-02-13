cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

include_directories(../include/LargeNumbers)
include_directories(../include/math)
add_executable(computePi compute.cpp)
target_link_libraries(computePi PUBLIC LargeNumbersLib)
