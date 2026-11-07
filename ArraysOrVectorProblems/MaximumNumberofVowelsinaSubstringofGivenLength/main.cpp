//leetcode problem number is 1456
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int count = 0;
        int countmax = 0;
        while (right < s.size()) {
            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                s[right] == 'o' || s[right] == 'u') {
                count++;
            }
            if (right - left + 1 == k) {
                countmax = max(countmax, count);
                if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                    s[left] == 'o' || s[left] == 'u') {
                    count--;
                }
                left++;
            }
            right++;
        }
        return countmax;
    }
int main(){
    string s = "leetcode";
    cout<<maxVowels(s,3);
}