//leetcode problem number 875
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
    int findmax(vector<int>& arr){
        int maximum = INT_MIN;
        for(int x : arr){
            maximum = max(maximum, x);
        }
        return maximum;
    }

    long long calculatehours(vector<int>& arr, int hourly){
        long long totalhour = 0;
        for(int x : arr){
            totalhour += (x + hourly - 1) / hourly;
        }
        return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);

        while(low <= high){
            int mid = low + (high - low)/2;
            long long totalhour = calculatehours(piles, mid);

            if(totalhour <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
int main(){
    vector<int> piles = {3,6,7,11};
    int hours = 8;
    cout<<minEatingSpeed(piles,hours);
}