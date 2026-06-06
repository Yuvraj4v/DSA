//leetcode problem number 26
#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 0; j<n ; j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(arr);
}