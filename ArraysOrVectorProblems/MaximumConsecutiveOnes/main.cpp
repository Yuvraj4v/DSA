//leetcode problem number 485
#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maximum = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==1){
                count++;
                maximum = max(count,maximum);
            }
            else{
                count = 0;
            }
        }
        return maximum;
    }
int main(){
    vector<int> arr = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(arr);

}