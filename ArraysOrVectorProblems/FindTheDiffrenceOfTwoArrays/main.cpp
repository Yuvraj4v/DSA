//leetcode problem number is 2215
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        vector<int> ans1, ans2;

        for (int num : s1) {
            if (s2.find(num) == s2.end()) {
                ans1.push_back(num);
            }
        }

        for (int num : s2) {
            if (s1.find(num) == s1.end()) {
                ans2.push_back(num);
            }
        }

        return {ans1, ans2};
    }
int main(){
    vector<int> arr = {1,2,3};
    vector<int> arr2 = {2,4,6};
    vector<vector<int>> ans = findDifference(arr,arr2);
    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0; j < ans[0].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}