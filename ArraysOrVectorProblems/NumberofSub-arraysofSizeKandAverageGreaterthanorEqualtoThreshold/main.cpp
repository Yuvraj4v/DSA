//leetcode problem number is 1343
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int left = 0;
        int right = 0;
        int count = 0;
        while (right < arr.size()) {
            sum += arr[right];
            while (right - left + 1 == k) {
                if (sum >= k * threshold) {
                    count++;
                    sum -= arr[left];
                    left++;
                } else {
                    sum -= arr[left];
                    left++;
                }
            }
            right++;
        }
        return count;
    }
int main(){
    vector<int> arr = {2,2,2,2,5,5,5,8};
    cout<<numOfSubarrays(arr,3,4);
}