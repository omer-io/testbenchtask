cmake_minimum_required(VERSION 3.30.1)
project(benchmark)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

add_subdirectory(googletest)
link_libraries(gtest)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(unittest)