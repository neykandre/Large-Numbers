project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_library(LargeNumbers LargeNumbers.cpp)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC LargeNumbers)