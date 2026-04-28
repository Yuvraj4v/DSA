#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ans = 0;
    int freq = 0;

    for(int value : nums){
        if(freq == 0){
            ans = value;
        }

        if(value == ans){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};

    int result = majorityElement(nums);

    cout << "Majority Element is: " << result;

    return 0;
}