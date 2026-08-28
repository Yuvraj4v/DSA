//leetcode problem number is 3232
#include <iostream>
#include <vector>
using namespace std;
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int dbl = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 10) {
                single += nums[i];
            } else {
                dbl += nums[i];
            }
        }

        return single != dbl;
    }
int main(){
    vector<int> arr = {1,2,3,4,10};
    cout<<canAliceWin(arr);
}