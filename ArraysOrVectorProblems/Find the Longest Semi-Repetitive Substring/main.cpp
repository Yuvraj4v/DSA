// leetcode problem number is 2730
#include <iostream>
#include <climits>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int longestSemiRepetitiveSubstring(string s) {
        int left = 0;
        int count = 0;
        int ans = 0;
        for (int right = 0; right < s.size(); right++) {
            if (right > 0 && s[right] == s[right - 1]) {
                count++;
            }
            while (count > 1) {
                if (s[left] == s[left + 1]) {
                    count--;
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
int main(){
    string s = "52233";
    cout<<longestSemiRepetitiveSubstring(s);
}