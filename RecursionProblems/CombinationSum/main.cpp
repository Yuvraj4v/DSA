// leetcode problem number is 39
#include <iostream>
#include <vector>
#include <string>
using namespace std;
    void getallcombination(vector<int> &arr , int idx , vector<int> &combination , vector<vector<int>> &ans , int target){
        if(target==0){
               ans.push_back(combination);
               return;
            
        }
        if(idx==arr.size() || target < 0){
            return;
        }
        combination.push_back(arr[idx]);
        getallcombination(arr,idx,combination,ans,target-arr[idx]);
        combination.pop_back();
        getallcombination(arr,idx+1,combination,ans,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        getallcombination(candidates,0,combination,ans,target);
        return ans;

    }
int main(){
    vector<int> arr = {2,3,6,7};
    vector<vector<int>> result = combinationSum(arr,7);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}