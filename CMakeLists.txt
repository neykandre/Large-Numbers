cmake_minimum_required(VERSION 3.27)
project(LargeNumbers)

set(CMAKE_CXX_STANDARD 20)

#library
add_subdirectory(sources)
#library

#TEST
add_subdirectory(test)
#TEST

#computingPi
add_subdirectory(computePi)
#computingPi