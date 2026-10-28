//leetcode problem number is 1493
#include<iostream>
#include<vector>
using namespace std;
int longestSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int countzero = 0;
        int ans = 0;
        while (right < nums.size()) {
            if (nums[right] == 0) {
                countzero++;
            }
            while(countzero > 1){
                if(nums[left] == 0){
                    countzero--;
                }
                left++;
            }
            ans = max(ans, right - left);
            right++;
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,1,0,1};
    cout<<longestSubarray(arr);
}