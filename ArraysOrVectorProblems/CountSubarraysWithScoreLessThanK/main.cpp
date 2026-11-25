// leetcode problem number is 2302
#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0;
        long long ans = 0;
        int left = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            sum += nums[right];
            while(sum * (right - left + 1) >= k){
                sum -= nums[left];
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
int main(){
    vector<int> arr = {2,1,4,3,5};
    cout<<countSubarrays(arr,10);
}