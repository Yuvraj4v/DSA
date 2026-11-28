// leetcode problem number is 2779
#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            while (nums[right] - nums[left] > 2*k) {
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
int main(){
    vector<int> arr = {4,6,1,2};
    cout<<maximumBeauty(arr,2);
}