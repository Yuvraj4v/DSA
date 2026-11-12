//leetcode problem number is 862
#include <iostream>
#include <deque>
#include <vector>
#include <climits>
using namespace std;
int shortestSubarray(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> prefix(nums.size() + 1, 0);
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        for (int i = 0; i < prefix.size(); i++) {
            while (!dq.empty() && prefix[i] - prefix[dq.front()] >= k) {
                ans = min(ans, i - dq.front());
                dq.pop_front();
            }
            while (!dq.empty() && prefix[i] <= prefix[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        if (ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
int main(){
    vector<int> arr = {2,-1,2};
    cout<<shortestSubarray(arr , 3);
}