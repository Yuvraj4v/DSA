//leetcode problem number is 2215
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int prev = nums.back();
        for (int i = nums.size() - 1; i >= 0; i--) {
            if(nums[i] != prev){
                count++;
                prev = nums[i];
            }
            if(count == 3){
                return nums[i];
            }
        }
        return nums.back();
    }
int main(){
    vector<int> arr = {3,2,1};
    cout<<thirdMax(arr);
}