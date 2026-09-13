//leetcode problem number is 728
#include <iostream>
#include <vector>
using namespace std;
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left ; i <= right ; i++){
            bool valid = true;
            int original = i;
            int n = i;
            while(n > 0){
                int digit = n % 10;
                if(digit == 0 || original % digit != 0){
                   valid = false;
                }
                n /= 10;
            }
            if(valid){
                ans.push_back(original);
            }
        }
        return ans;

    }
int main(){
    vector<int> res = selfDividingNumbers(1,22);
    for(int val : res){
        cout<<val<<" ";
    }
}