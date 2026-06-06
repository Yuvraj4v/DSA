//leetcode problem number 283
#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        if(j != -1){
        for(int i = j+1 ; i<n ; i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        }
        for(int val : nums){
            cout<<val<<" ";
        }
    }
int main(){
    vector<int> arr = {0,1,0,3,12};
    moveZeroes(arr);
}