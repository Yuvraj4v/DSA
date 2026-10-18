//leetcode problem number 665
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool checkPossibility(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] > nums[i + 1]) {
                if (count == 0){
                    count++;
                }else{
                    return false;
                }
                if (i == 0 || nums[i + 1] >= nums[i - 1]) {
                    nums[i] = nums[i + 1];
                }else{
                    nums[i + 1] = nums[i];
                }
            }
        }
        return true;
    }
int main(){
    vector<int> nums = {4,2,3};
    cout<<checkPossibility(nums);
}