//leetcode problem number is 1658
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minOperations(vector<int>& nums, int x) {
        int total = 0;

        for (int x : nums) {
            total += x;
        }

        int target = total - x;
        if (target < 0)
            return -1;
        int left = 0;
        int sum = 0;
        int maxlength = -1;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > target) {
                sum -= nums[left];
                left++;
            }
            if (sum == target) {
                maxlength = max(maxlength, right - left + 1);
            }
        }
        if (maxlength == -1)
            return -1;
        return nums.size() - maxlength;
    }
int main(){
    vector<int> arr = {1,1,4,2,3};
    cout<<minOperations(arr,5);
}