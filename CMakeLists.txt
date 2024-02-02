cmake_minimum_required(VERSION 3.27)
project(example)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(sources)

include_directories(include/LargeNumbers)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC LargeNumbersLib)