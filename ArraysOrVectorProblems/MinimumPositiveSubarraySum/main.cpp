//leetcode problem number is 3364
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;

        for (int k = l; k <= r; k++) {
            int sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];

                if (i >= k) {
                    sum -= nums[i - k];
                }

                if (i >= k - 1 && sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
int main(){
    vector<int> arr = {3, -2, 1, 4};
    cout<<minimumSumSubarray(arr,2,3);
}