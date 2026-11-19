// leetcode problem number is 1200
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int mini = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            mini = min(mini, arr[i] - arr[i - 1]);
        }

        vector<vector<int>> ans;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == mini) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        return ans;
    }
int main(){
    vector<int> arr = {4,2,1,3};
    vector<vector<int>> ans = minimumAbsDifference(arr);
    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ; j < ans[0].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}