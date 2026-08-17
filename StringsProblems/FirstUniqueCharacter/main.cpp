//leetcode problem number 387
#include<iostream>
#include<string>
using namespace std;
    int firstUniqChar(string s) {
        int freq[26] = {};

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
int main(){
    string s = "leetcode";
    cout<<firstUniqChar(s);
}