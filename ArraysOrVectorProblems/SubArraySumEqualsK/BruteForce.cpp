//leetcode problem number 560
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += nums[j];
                if(sum==k){count++;}
            }
        }
        return count;
    }
int main(){
    vector<int> arr = {1,2,3};
    int k = 3;
    cout<<subarraySum(arr,k);
}