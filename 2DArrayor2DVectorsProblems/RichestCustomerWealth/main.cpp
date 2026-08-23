//leetcode problem number is 1672
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        for(int i = 0 ; i < accounts.size() ; i++){
            int Money = 0;
            for(int j = 0 ; j < accounts[i].size() ; j++){
                Money += accounts[i][j];
            }
            wealth = max(wealth , Money);
        }
        return wealth;
    }
int main(){
    vector<vector<int>> arr = {{1,2,3},{3,2,1}};
    cout<<maximumWealth(arr);
}
