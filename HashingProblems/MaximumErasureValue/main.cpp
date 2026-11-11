//leetcode problem number is 1695
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int score = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        for (int right = 0; right < nums.size(); right++) {
            score += nums[right];
            mp[nums[right]]++;
            while (mp[nums[right]] > 1) {
                score -= nums[left];
                mp[nums[left]]--;
                left++;
            }
            ans = max(ans, score);
        }
        return ans;
    }
int main(){
    vector<int> arr = {4,2,4,5,6};
    cout<<maximumUniqueSubarray(arr);
}