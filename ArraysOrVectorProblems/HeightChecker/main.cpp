//leetcode problem number is 1051
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> copy = heights;
        sort(copy.begin(),copy.end());
        for(int i = 0 ; i < heights.size() ; i++){
            if(heights[i] != copy[i]){
                count++;
            }
        }
        return count;
    }
int main(){
    vector<int> arr = {1,1,4,2,1,3};
    cout<<heightChecker(arr);
}