include(ExternalProject)

ExternalProject_Add(benchmark
    PREFIX ${CMAKE_BINARY_DIR}/benchmark
    GIT_REPOSITORY https://github.com/google/benchmark
    GIT_TAG v1.8.5
    CMAKE_ARGS -DBENCHMARK_DOWNLOAD_DEPENDENCIES=on -DCMAKE_BUILD_TYPE=Release
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(benchmark binary_dir)

add_executable(bm benchmark.cpp)

target_link_libraries(bm ${binary_dir}/src/libbenchmark.a pthread codility)