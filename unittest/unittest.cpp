#include "codility.h"
#include<vector>
#include <gtest/gtest.h>
using namespace std;

// BniaryGap tests
// largest 32 bit number 
TEST(testBinaryGap, testExtreme){
    EXPECT_EQ(0, solution(2147483647));
}

TEST(testBinaryGap, testPosNums){
    EXPECT_EQ(1, solution(10));
    EXPECT_EQ(0, solution(12));
    EXPECT_EQ(3, solution(138));
}

// CyclicRotation tests

TEST(testCyclicRotation, posVector){
    vector<int> nums = {1,2,3,4};
    vector<int> res = {4,1,2,3};
    EXPECT_EQ(res, solution(nums, 1));
}

TEST(testCyclicRotation, testK0){
    vector<int> nums = {1,2,3,4};
    vector<int> res = nums;
    EXPECT_EQ(res, solution(nums, 0));
}

// extreme N = K = 100, extreme element value = [−1,000..1,000]
TEST(testCyclicRotation, extreme){
    vector<int> nums;
    for(int i = 0; i < 50; i++)
        nums.push_back(1000);
    for(int i = 0; i < 50; i++)
        nums.push_back(-1000);    
    vector<int> res = nums;
    EXPECT_EQ(res, solution(nums, 100));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}