// leetcode problem number is 1574
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int findLengthOfShortestSubarray(vector<int>& arr) {
        int left = 0;
        int ans = INT_MAX;
        int right = arr.size() - 1;
        while (left < arr.size() - 1 && arr[left] <= arr[left + 1]) {
            left++;
        }
        if (left == arr.size() - 1) {
            return 0;
        }
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }
        ans = min((int)arr.size() - left - 1, right);
        int i = 0;
        int j = right;
        while (i <= left && j < arr.size()) {
            if (arr[i] <= arr[j]) {
                ans = min(ans, j - i - 1);
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,10,4,2,3,5};
    cout<<findLengthOfShortestSubarray(arr);
}