// leetcode problem number is 2958
#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0;
        int ans = 0;
        unordered_map<int,int> mp;
        for(int right = 0 ; right < nums.size() ; right++){
            mp[nums[right]]++;
            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans = max(ans,right - left + 1);
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,1,2,3,1,2};
    cout<<maxSubarrayLength(arr,2);
}