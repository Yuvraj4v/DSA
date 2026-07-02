//leetcode problem number is 1004
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
   int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int zeroes = 0;
        int maxlen = 0;
        while(right < nums.size()){
            if(nums[right] == 0){
                zeroes++;
            }
            while(zeroes > k){
                if(nums[left] == 0){
                    zeroes--;
                }
                left++;
            }
            maxlen = max(maxlen,right - left + 1);
            right++;
        }
        return maxlen;
    }
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    cout<<longestOnes(nums,2);
}