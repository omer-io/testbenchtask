#include "codility.h"
#include <iostream>
#include<bitset>
#include<vector>
using namespace std;

int main(){
    cout << "Enter a number to compute binary gap: ";
    int input;
    cin >> input;
    cout << "Binary Gap of " << input << " is " << solution(input) << endl;
    vector<int> nums = {1,2,3,4};
    vector<int> shifted = solution(nums, 2);
    cout << "1, 2, 3, 4 rotated 2 times is ";
    for (int num : shifted) {
    cout << num << " ";
    }
    cout << endl;
    return 0;
}