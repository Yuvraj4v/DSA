//leetcode problem number is 896
#include<iostream>
#include<vector>
using namespace std;
bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                decreasing = false;
            }
            if (nums[i] > nums[i + 1]) {
                increasing = false;
            }
        }
        return increasing || decreasing;
    }
int main(){
    vector<int> arr = {1,2,2,3};
    cout<<isMonotonic(arr);
}