// leetcode problem number is 992
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int atMost(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (freq[nums[right]] == 0)
                k--;

            freq[nums[right]]++;

            while (k < 0) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    k++;
                left++;
            }

            count += right - left + 1;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
int main(){
    vector<int> arr = {1,2,1,2,3};
    cout<<subarraysWithKDistinct(arr,2);
}