// leetcode problem number is 1588
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int count = ((i + 1) * (n - i) + 1) / 2;
            ans += arr[i] * count;
        }

        return ans;
    }
int main(){
    vector<int> arr = {1,4,2,5,3};
    cout<<sumOddLengthSubarrays(arr);
}