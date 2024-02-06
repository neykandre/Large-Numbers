## Purpose

Funny library for arbitrary-precision arithmetic


## Prerequisites

1. Cmake version 3.27 is required. To check:
   ```sh
   cmake --version
   ```

## Installation

1. Make dir for cloning
1. Clone the repo:
   ```sh
   git clone https://github.com/neykandre/Large-Numbers.git
   ```
2. Make dir for build files:
   ```sh
   mkdir build_files
   ```
3. Build the project:
   ```sh
   cd ./build_files
   cmake ../Large-Numbers
   cmake --build .
   ```
It's possible to build the following targets separately (with --target argument):
1. MyTests - tests
2. computePi - computing Pi programm
3. LargeNumbersLib - library separately

## Usage

1. ```sh
   /computePi/computePi *precision(default=100)*
   ```
    - compute PI constant with given precision
2. ```sh
   /test/MyTests
   ```
   - run tests
