//leetcode problem number 90
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    void getsubset(vector<int> &arr , vector<int> &ans , int i , vector<vector<int>> &allsubset){
        if(i==arr.size()){
            allsubset.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        getsubset(arr,ans,i+1,allsubset);
        ans.pop_back();
        int idx = i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]){
            idx++;
        }
        getsubset(arr,ans,idx,allsubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubset;
        vector<int> ans;
        getsubset(nums,ans,0,allsubset);
        return allsubset;
    }
int main(){
    vector<int> arr = {1,2,2};
    vector<vector<int>> result = subsetsWithDup(arr);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

}