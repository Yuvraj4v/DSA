//leetcode problem number is 724
#include<iostream>
#include<vector>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        int leftsum = 0;

        for(int val : nums){
            totalsum += val;
        }

        for(int i = 0 ; i < nums.size() ; i++){
            int rightsum = totalsum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
int main(){
    vector<int> arr = {1,7,3,6,5,6};
    cout<<pivotIndex(arr);
}