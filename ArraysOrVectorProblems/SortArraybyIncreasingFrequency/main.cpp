// leetcode problem number is 1636
#include <iostream>
#include <climits>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;
            }
            return freq[a] < freq[b];
        });

        return nums;
    }
int main(){
    vector<int> arr = {1,1,2,2,2,3};
    vector<int> result = frequencySort(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}