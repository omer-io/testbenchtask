#include "codility.h"
#include <iostream>
#include<vector>
using namespace std;

int main(){
    // sample run BinaryGap
    int num = 10;
    cout << "Binary Gap of " << num << " is " << solution(num) << endl;
    
    // sample run CyclicRotation 
    vector<int> nums = {1,2,3,4};
    for (int num : nums)
    cout << num << " ";

    vector<int> rotated = solution(nums, 2);
    cout << "rotated 2 times is ";
    for (int num : rotated)
        cout << num << " ";
    cout << endl;

    return 0;
}