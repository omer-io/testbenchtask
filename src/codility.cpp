#include "codility.h"
#include <iostream>
#include<bitset>
#include<vector>
using namespace std;

int solution(int N){
    string str = bitset<8>(N).to_string();
    int currentCount = 0;
    int maxCount = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            currentCount = 0;
            while (++i < str.length() && str[i] == '0') {
                currentCount += 1;
            }
            if (str[i] == '1') {
                if (currentCount > maxCount) {
                    maxCount = currentCount;            
                }
            }
        }
    }
    return maxCount;

}

vector<int> solution(vector<int> &A, int K){
    for(int i = 0; i < K; i++){
        int temp = A.back();
        A.pop_back();
        A.insert(A.begin(), temp);
    }
    return A;
}


