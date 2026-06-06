//leetcode problem number 268
#include<iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            xor1 ^= nums[i];
            xor2 ^= i;
        }

        xor2 ^= n;

        return xor1 ^ xor2;
    }
int main(){
    vector<int> arr = {3,0,1};
    cout<<missingNumber(arr);
}