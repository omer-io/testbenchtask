#include "codility.h"
#include <iostream>
#include<bitset>
#include<vector>
using namespace std;

int main(){
    cout << solution(10) << endl;
    vector<int> nums = {1,2,3,4};
    vector<int> shifted = solution(nums, 1);
    for (int num : shifted) {
    cout << num << " ";
    }
    cout << endl;
}