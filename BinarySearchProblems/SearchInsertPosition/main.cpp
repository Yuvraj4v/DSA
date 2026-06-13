//leetcode problem number 35
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = nums.size() - 1;
        int ans = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }    
int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 11;

    cout << searchInsert(arr, tar);
}