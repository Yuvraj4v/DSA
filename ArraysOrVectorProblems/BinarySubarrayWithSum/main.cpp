//leetcode problem number is 930
#include <iostream>
#include <unordered_map>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for(int num : nums){
            sum += num;

            if(mp.find(sum - goal) != mp.end()){
                count += mp[sum - goal];
            }

            mp[sum]++;
        }

        return count;
    }
int main(){
    vector<int> num = {1,0,1,0,1};
    cout<<numSubarraysWithSum(num,2);
}