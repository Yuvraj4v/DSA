// leetcode problem number is 2379
#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int minimumRecolors(string blocks, int k) {
        int left = 0;
        int count = 0;
        int ans = INT_MAX;
        for (int right = 0; right < blocks.size(); right++) {
            if (blocks[right] == 'W') {
                count++;
            }
            while (right - left + 1 > k) {
                if (blocks[left] == 'W') {
                    count--;
                }
                left++;
            }
            if (right - left + 1 == k) {
                ans = min(ans, count);
            }
        }
        return ans;
    }
int main(){
    string s = "WBBWWBBWBW";
    cout<<minimumRecolors(s,7);
}