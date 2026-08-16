//leetcode problem number 2974
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2) {
            swap(nums[i], nums[i + 1]);
        }

        return nums;
    }
int main(){
    vector<int> arr = {5,4,2,3};
    vector<int> result = numberGame(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}