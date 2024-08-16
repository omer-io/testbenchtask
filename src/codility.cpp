#include "codility.h"
#include <iostream>
#include<bitset>
#include<vector>
using namespace std;

// Binary Gap
int solution(int N){
    //  convert to string of bits
    string str = bitset<32>(N).to_string();
    int currentCount = 0;
    int maxCount = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            currentCount = 0;
            // if encountered 1, start counting next 0s
            while (++i < str.length() && str[i] == '0') {
                currentCount += 1;
            }
            // if gap ends with 1
            if (str[i] == '1') {
                if (currentCount > maxCount) {
                    maxCount = currentCount;            
                }
            }
        }
    }
    return maxCount;
}

// Cyclic Rotation
vector<int> solution(vector<int> &A, int K){
    for(int i = 0; i < K; i++){
        //  remove last element and insert in begining
        int temp = A.back();
        A.pop_back();
        A.insert(A.begin(), temp);
    }
    return A;
}


