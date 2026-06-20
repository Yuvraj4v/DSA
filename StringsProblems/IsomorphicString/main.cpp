//leetcode problem number 205
#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.size(); i++) {
            if (mp1.count(s[i]) && mp1[s[i]] != t[i])
                return false;

            if (mp2.count(t[i]) && mp2[t[i]] != s[i])
                return false;

            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
int main(){
    string s = "egg";
    string t = "add";
    cout<<isIsomorphic(s,t);
}