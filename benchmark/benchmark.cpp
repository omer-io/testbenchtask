#include <benchmark/benchmark.h>
#include "codility.h"
#include <iostream>
#include<vector>
using namespace std;

void binaryGapBM(benchmark::State& state) {
    int result;
    for (auto _ : state){
        result = solution(10);
    }
}

void cyclicRotationBM(benchmark::State& state) {
    vector<int> nums = {1,2,3,4};
    vector<int> result;
    for (auto _ : state){
        result = solution(nums, 3);
    }
}

BENCHMARK(binaryGapBM);
BENCHMARK(cyclicRotationBM);

BENCHMARK_MAIN();