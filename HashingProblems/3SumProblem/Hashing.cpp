// leetcode problem number 15
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniquetriplets;
        for(int i = 0 ; i < n ; i++){
            int tar = -nums[i];
            set<int> s;
            for(int j = i+1 ; j < n ; j++){
                int third = tar - nums[j];
                if(s.find(third) != s.end()){
                    vector<int> trip = {nums[i],nums[j],third};
                    sort(trip.begin(),trip.end());
                    uniquetriplets.insert(trip);
                }
                s.insert(nums[j]);
            }
                
        }
        vector<vector<int>> ans(uniquetriplets.begin(),uniquetriplets.end());
        return ans;
    }
int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(arr);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j <result[0].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


}