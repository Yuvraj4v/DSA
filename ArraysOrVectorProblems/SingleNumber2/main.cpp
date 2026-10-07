//leetcode problem number is 137
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]]++;
            }else{
                mp.insert({nums[i],1});
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
int main(){
    vector<int> nums = {2,2,3,2};
    cout<<singleNumber(nums);
}