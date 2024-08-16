# TestBenchTask

## Table of Contents
-----------------

* [Introduction](#introduction)
* [Building and Running](#building-and-running)

## Introduction
---------------

This project is designed to unit test and benchmark BinaryGap and CyclicRotation algorithms. 

## Building and Running
---------------------

To build and run the project, follow these steps:

1. Clone the repository: `git clone https://github.com/omer-io/testbenchtask`
2. Create a build directory: `mkdir build`
3. Navigate to the build directory: `cd build`
4. Run CMake: `cmake ..`
5. To disable tests and benchmarks run CMake with options: `cmake .. -DENABLE_UNITTEST=OFF -DENABLE_BENCHMARK=OFF`
6. Build the project: `make`
7. Run unit tests: `./unittest/test`
8. Run benchmarks: `./benchmark/bm`
9. Run main app: `./app/main`


