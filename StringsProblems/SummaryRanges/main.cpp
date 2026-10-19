//leetcode problem number 228
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int start = i;
            while(i+1 < nums.size() && nums[i+1] == nums[i]+1){
                i++;
            }
            if(start == i){
                ans.push_back(to_string(nums[i]));
            }else{
                ans.push_back(to_string(nums[start])+"->"+to_string(nums[i]));
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {0,1,2,4,5,7};
    vector<string> result = summaryRanges(arr);
    for(string ch : result){
        cout<<ch<<" ";
    }
}