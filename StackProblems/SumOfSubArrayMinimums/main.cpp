//leetcode problem number is 907
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int sumSubarrayMins(vector<int>& arr) {
        long long sum = 0;
        stack<int> s;
        int mod = 1e9 + 7;
        vector<int> left(arr.size()), right(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            while (!s.empty() && arr[i] < arr[s.top()]) {
                s.pop();
            }
            left[i] = s.empty() ? i + 1 : i - s.top();
            s.push(i);
        }
        while (!s.empty()) {
            s.pop();
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? arr.size() - i : s.top() - i;
            s.push(i);
        }
        for (int i = 0; i < arr.size(); i++) {
            sum = (sum + (long long)arr[i] * left[i] * right[i]) % mod;
        }
        return sum;
    }
int main(){
    vector<int> arr = {3,1,2,4};
    cout<<sumSubarrayMins(arr);
}