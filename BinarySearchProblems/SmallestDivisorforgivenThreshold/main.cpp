//leetcode problem number 1283
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
    long long sumofdivisor(vector<int> &arr , int div){
        int n = arr.size();
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += (arr[i] + div - 1) / div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        if(n>threshold)return -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(sumofdivisor(nums,mid)<=threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
int main(){
    vector<int> arr = {1,2,5,9};
    int th = 6;
    cout<<smallestDivisor(arr,th);
}