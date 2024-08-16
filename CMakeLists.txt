cmake_minimum_required(VERSION 3.30.1)
project(benchmark)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

option(ENABLE_UNITTEST "Enable compilation of unittest" ON)
option(ENABLE_BENCHMARK "Enable compilation of benchmark" ON)

add_subdirectory(googletest)
link_libraries(gtest)

add_subdirectory(src)
add_subdirectory(app)

if(ENABLE_UNITTEST)
    add_subdirectory(unittest)
endif()

if(ENABLE_BENCHMARK)
    add_subdirectory(benchmark)
endif()
