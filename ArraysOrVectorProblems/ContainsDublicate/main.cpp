//leetcode problem number is 217
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int val : nums){
            if(s.count(val)){
                return true;
            }
            s.insert(val);
        }
        return false;
    }
int main(){
    vector<int> arr = {1,2,3,1};
    cout<<containsDuplicate(arr);
}