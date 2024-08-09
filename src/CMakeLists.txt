set(LIB_SOURCES codility.cpp)
add_library(codility STATIC ${LIB_SOURCES})
target_include_directories(codility PUBLIC ${CMAKE_SOURCE_DIR}/include)