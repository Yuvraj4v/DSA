//leetcode problem number is 1822
#include <iostream>
#include <vector>
using namespace std;
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                return 0;
            }else if(nums[i] < 0){
                sign *= -1;
            }
        }
        return sign;
    }
int main(){
    vector<int> arr = {-1,-2,-3,-4,3,2,1};
    cout<<arraySign(arr);
}