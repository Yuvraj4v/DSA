//leetcode problem number 34
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
     int lowerbound(vector<int> &nums , int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int upperbound(vector<int> &nums , int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums,target);
        if(lb==n || nums[lb]!=target){return {-1,-1};}
        return {lb,(upperbound(nums,target)-1)};
    }
int main(){
    vector<int> arr = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(arr,target);
    for(int x : result){
        cout<<x<<" ";
    }
}