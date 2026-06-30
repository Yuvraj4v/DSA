//leetcode problem number is 216
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    void solve(int start ,int k , int target ,  vector<int> &temp , vector<vector<int>> &ans){
        if(target == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(temp.size() >= k || target < 0){
            return;
        }
        for(int i = start ; i <= 9 ; i++){
            if(i > target){
                break;
            }
            temp.push_back(i);
            solve(i+1,k,target-i,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(1,k,n,temp,ans);
        return ans;
    }
int main(){
    int k = 3;
    int n = 7;
    vector<vector<int>> result = combinationSum3(k,n);
        for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}