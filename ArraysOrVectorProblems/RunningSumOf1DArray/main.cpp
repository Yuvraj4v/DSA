//leetcode problem number is 1480
#include<iostream>
#include<vector>
using namespace std;
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> result = runningSum(arr);
    for(int val : result){
        cout<<val<<" ";
    }
}