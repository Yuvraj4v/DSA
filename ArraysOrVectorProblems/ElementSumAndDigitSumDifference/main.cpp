//leetcode problem number 2535
#include<iostream>
#include<vector>
using namespace std;
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        int digitsum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            elementsum += nums[i];
            int num = nums[i];
            while(num > 0){
                digitsum += num % 10;
                num /= 10;
            }
        }
        return abs(elementsum - digitsum);
    }
int main(){
    vector<int> arr = {1,15,6,3};
    cout<<differenceOfSum(arr);
}