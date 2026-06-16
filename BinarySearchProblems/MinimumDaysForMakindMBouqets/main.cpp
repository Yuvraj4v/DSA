//leetcode problem number 1482
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int count = 0;
        int bouquets = 0;

        for (int x : bloomDay) {
            if (x <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * m * k;

        if (total > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
int main(){
    vector<int> arr = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    cout<<minDays(arr,m,k);
}