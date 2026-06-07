//leetcode problem number 128
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        int longest = 1;
        unordered_set<int> s;
        for(int i = 0 ; i < n ; i++){
            s.insert(nums[i]);
        }
        for(auto it : s){
            if(s.find(it-1) == s.end()){
                int count = 1;
                int x = it;
                while(s.find(x+1) != s.end()){
                    x++;
                    count ++;
                    longest = max(longest,count);
                }
            }

        }
        return longest;

    }
int main(){
    vector<int> arr = {100,4,200,1,3,2};
    cout<<longestConsecutive(arr);
}