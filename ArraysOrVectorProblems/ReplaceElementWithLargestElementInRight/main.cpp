//leetcode problem number is 1299
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;

        for(int i = arr.size() - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, current);
        }

        return arr;
    }
int main(){
    vector<int> arr = {17,18,5,4,6,1};
    vector<int> ans = replaceElements(arr);
    for(int val : ans){
        cout<<val<<" ";
    }
}