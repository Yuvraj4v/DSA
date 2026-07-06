// leetcode problem number is 1423
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += cardPoints[i];

        int ans = sum;
        for (int i = 1; i <= k; i++) {
            sum -= cardPoints[k - i];
            sum += cardPoints[n - i];
            ans = max(ans, sum);
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,4,5,6,1};
    cout<<maxScore(arr,3);
}