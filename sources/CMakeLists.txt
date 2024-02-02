cmake_minimum_required(VERSION 3.27)
project(sources)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(LargeNumbers)
add_subdirectory(math)

target_link_libraries(LargeNumbersLib PRIVATE MyMath)