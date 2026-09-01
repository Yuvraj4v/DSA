//leetcode problem number is 3024
#include<iostream>
#include<vector>
#include<string>
using namespace std;
    string triangleType(vector<int>& nums) {
        if(nums[0] + nums[1] <= nums[2] ||
           nums[0] + nums[2] <= nums[1] ||
           nums[1] + nums[2] <= nums[0]) {
            return "none";
        }

        if(nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }
        
        if(nums[0] == nums[1] || 
           nums[1] == nums[2] || 
           nums[0] == nums[2]) {
            return "isosceles";
        }

        return "scalene";
    }
int main(){
    vector<int> arr = {3,3,5};
    cout<<triangleType(arr);
}