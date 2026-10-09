//leetcode problem number is 739
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<int> s;
        for(int i = 0 ; i < temperatures.size() ; i++){
            while(!s.empty() && temperatures[s.top()] < temperatures[i]){
                ans[s.top()] = i - s.top();
                s.pop(); 
            }
            s.push(i);
        }
        return ans;
    }
int main(){
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> result = dailyTemperatures(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}