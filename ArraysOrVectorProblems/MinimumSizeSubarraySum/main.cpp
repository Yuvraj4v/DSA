//leetcode problem number is 2215
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int minlength = INT_MAX;
        while (right < nums.size()) {
            sum += nums[right];

            while (sum >= target) {
                minlength = min(minlength, right - left + 1);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        if (minlength == INT_MAX) {
            return 0;
        }
        return minlength;
    }
int main(){
    vector<int> arr = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7,arr);
}