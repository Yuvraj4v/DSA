//leetcode problem number 704
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    cout << search(arr, tar);

}