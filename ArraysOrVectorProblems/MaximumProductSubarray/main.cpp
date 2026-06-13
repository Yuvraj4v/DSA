//leetcode problem number 152
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int maxProduct(vector<int>& nums) {
        int maxprod = nums[0];
        int minprod = nums[0];
        int ans = nums[0];
        int n = nums.size();
        for(int i = 1 ; i < n ; i++){
            if(nums[i]<0){
                swap(maxprod,minprod);
            }
            maxprod = max(nums[i] , maxprod*nums[i]);
            minprod = min(nums[i] , minprod*nums[i]);
            ans = max(ans , maxprod);
        }
        return ans;
    }
int main(){
    vector<int> arr = {2,3,-2,4};
    cout<<maxProduct(arr);
}