//leetcode problem number is 713
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int mul = 1;
        int left = 0;
        int right = 0;
        int count = 0;
        if (k <= 1)
            return 0;
        while (right < nums.size()) {
            mul *= nums[right];

            while (mul >= k) {
                mul = mul / nums[left];
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
int main(){
    vector<int> arr = {10,5,2,6};
    cout<<numSubarrayProductLessThanK(arr,100);
}