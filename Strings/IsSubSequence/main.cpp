//leetcode problem number is 392
#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        return i == s.size();
    }
int main(){
    cout<<isSubsequence("abc","ahbgdc");
}