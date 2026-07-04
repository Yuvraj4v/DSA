//leetcode problem number is 1248
#include <iostream>
#include <unordered_map>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int atMost(vector<int>& nums, int k) {
        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2)
                k--;

            while (k < 0) {
                if (nums[left] % 2)
                    k++;
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
int main(){
    vector<int> num = {1,1,2,1,1};
    cout<<numberOfSubarrays(num,3);
}