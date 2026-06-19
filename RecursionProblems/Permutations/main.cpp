//leetcode problem number 46
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    void getparams(vector<int> &nums ,int idx , vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i = idx ; i < nums.size() ; i++){
            swap(nums[idx],nums[i]);
            getparams(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getparams(nums,0,ans);
        return ans;
    }
int main(){
        vector<int> arr = {1,2,3};
    vector<vector<int>> result = permute(arr);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}