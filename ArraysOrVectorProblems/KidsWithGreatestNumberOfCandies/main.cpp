//leetcode problem number is 1431
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(int val: candies){
            maxi = max(maxi,val);
        }
        vector<bool> result(candies.size());
        for(int i = 0; i < candies.size(); i++) {
            result[i] = (candies[i] + extraCandies >= maxi);
        }
        return result;
    }
int main(){
    vector<int> candies = {2,3,5,1,3};
    vector<bool> result = kidsWithCandies(candies,3);
    for(bool val : result){
        cout<<val<<" ";
    }
}