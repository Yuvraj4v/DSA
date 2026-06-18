//leetcode problem number 78
#include<iostream>
#include<vector>
using namespace std;
    void getsubset(vector<int> &arr,vector<int> &ans,int i,vector<vector<int>> &allsubset){
        if(i==arr.size()){
            allsubset.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        getsubset(arr,ans,i+1,allsubset);
        ans.pop_back();
        getsubset(arr,ans,i+1,allsubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubset;
        vector<int> ans;
        getsubset(nums,ans,0,allsubset);
        return allsubset;
    }
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> result = subsets(arr);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

}