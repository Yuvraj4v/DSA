//leetcode problem number is 643
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0;
        int left = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            sum += nums[right];
            while(right - left + 1 == k){
                ans = max(ans,sum/k);
                sum -= nums[left];
                left++;
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,12,-5,-6,50,3};
    cout<<findMaxAverage(arr,4);
}