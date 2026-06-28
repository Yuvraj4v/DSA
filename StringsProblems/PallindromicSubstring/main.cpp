//leetcode problem number is 647
#include <iostream>
#include <vector>
#include <string>
using namespace std;
    int expand(string &s, int left, int right) {
        int count = 0;

        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }

        return count;
    }

    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += expand(s, i, i);
            ans += expand(s, i, i + 1);
        }

        return ans;
    }
int main(){
    string s = "abc";
    cout<<countSubstrings(s);
}