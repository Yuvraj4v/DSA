//leetcode problem number is 795
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        int valid = 0;
        int lastInvalid = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > right) {
                valid = 0;
                lastInvalid = i;
            }
            else if (nums[i] >= left) {
                valid = i - lastInvalid;
            }

            ans += valid;
        }

        return ans;
    }
int main(){
    vector<int> arr = {2,1,4,3};
    cout<<numSubarrayBoundedMax(arr,2,3);
}