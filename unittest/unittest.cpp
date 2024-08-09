#include "codility.h"
#include <gtest/gtest.h>

TEST(testBinaryGap, testPosNum){
    EXPECT_EQ(1, solution(10));
    EXPECT_EQ(0, solution(12));
    EXPECT_EQ(3, solution(138));
}

TEST(testBinaryGap, testPosNums){
    EXPECT_EQ(1, solution(10));
    EXPECT_EQ(0, solution(12));
    EXPECT_EQ(3, solution(138));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}