//leetcode problem number 560
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefixsum(n);
        prefixsum[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefixsum[i] = prefixsum[i - 1] + nums[i];
        }

        unordered_map<int,int> m;
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(prefixsum[j] == k) count++;

            int val = prefixsum[j] - k;

            if(m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefixsum[j]]++;
        }

        return count;
    }
int main(){
    vector<int> arr = {1,2,3};
    int k = 3;
    cout<<subarraySum(arr,k);
}