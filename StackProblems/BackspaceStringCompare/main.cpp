//leetcode problem number is 844
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for (int i = 0; i < s.size(); i++) {
            if (!st1.empty() && s[i] == '#') {
                st1.pop();
            } else if (st1.empty() && s[i] == '#') {
                continue;
            } else {
                st1.push(s[i]);
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (!st2.empty() && t[i] == '#') {
                st2.pop();
            } else if (st2.empty() && t[i] == '#') {
                continue;
            } else {
                st2.push(t[i]);
            }
        }
        if (st1 == st2) {
            return true;
        }
        return false;
    }
int main(){
    cout<<backspaceCompare("ab#c","ad#c");
}