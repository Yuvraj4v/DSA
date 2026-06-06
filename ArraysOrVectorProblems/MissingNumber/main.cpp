//leetcode problem number 268
#include<iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualsum = 0;
        int expsum = n*(n+1)/2;
        for(int i = 0; i<n ; i++){
            actualsum += nums[i];
        }
        int missing = expsum - actualsum;
        return missing;
        
    }
int main(){
    vector<int> arr = {3,0,1};
    cout<<missingNumber(arr);
}