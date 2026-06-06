//leetcode problem number 349
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for(int num : nums2) {
            if(s1.count(num)) {
                ans.insert(num);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
int main(){
    vector<int> arr1 = {1,2,2,1};
    vector<int> arr2 = {2,2};
    vector<int> result = intersection(arr1,arr2);
    for(int x : result){
        cout<<x<<" ";
    }

}