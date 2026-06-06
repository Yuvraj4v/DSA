//leetcode problem number 350
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                i++;
            }
            else if(nums1[i] > nums2[j]) {
                j++;
            }
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return ans;
    }
int main(){
    vector<int> arr1 = {1,2,2,1};
    vector<int> arr2 = {2,2};
    vector<int> result = intersect(arr1,arr2);
    for(int x : result){
        cout<<x<<" ";
    }

}