//leetcode problem number is 962
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int maxWidthRamp(vector<int>& nums) {
        int ans = 0;
        stack<int> s;
        for(int i = 0 ; i < nums.size() ; i++){
            if(s.empty() || nums[i] < nums[s.top()]){
                s.push(i);
            }
        }
        for(int j = nums.size()-1 ; j >= 0 ; j--){
            while(!s.empty() && nums[s.top()]<=nums[j]){
                ans = max(ans,j-s.top());
                s.pop();
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {6,0,8,2,1,5};
    cout<<maxWidthRamp(arr);
}