#include "codility.h"
#include <iostream>
#include<bitset>
#include<vector>
using namespace std;

int main(int argc, char **argv){
    if (argc < 2) {
        cout << "Provide an input to compute binary gap." << endl;
        return 1;
    }
    int input = atoi(argv[1]);
    cout << solution(input) << endl;
    vector<int> nums = {1,2,3,4};
    vector<int> shifted = solution(nums, 1);
    for (int num : shifted) {
    cout << num << " ";
    }
    cout << endl;
    return 0;
}