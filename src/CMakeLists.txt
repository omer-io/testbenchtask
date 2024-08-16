add_library(codility STATIC codility.cpp)
target_include_directories(codility PUBLIC ${CMAKE_SOURCE_DIR}/include)