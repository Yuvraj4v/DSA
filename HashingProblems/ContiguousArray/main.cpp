// leetcode problem number 525
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<algorithm>
using namespace std;
int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                sum--;
            } else {
                sum++;
            }
            if (mp.find(sum) != mp.end()) {
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {0,1,1,1,1,1,0,0,0};
    cout<<findMaxLength(arr);
}