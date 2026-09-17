//leetcode problem number is 1470
#include<iostream>
#include<vector>
using namespace std;
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for(int i = 0 ; i < n ; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,4,4,3,2,1};
    vector<int> result = shuffle(arr,4);
    for(int val : result){
        cout<<val<<" ";
    }
}