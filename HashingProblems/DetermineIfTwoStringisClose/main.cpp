//leetcode problem number is 1657
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool closeStrings(string word1, string word2) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        if (word1.size() != word2.size())
            return false;
        for (int i = 0; i < word1.size(); i++) {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for (auto& p : mp1) {
            if (mp2.find(p.first) == mp2.end()) {
                return false;
            }
        }

        vector<int> freq1, freq2;

        for (auto& p : mp1) {
            freq1.push_back(p.second);
        }

        for (auto& p : mp2) {
            freq2.push_back(p.second);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        if (freq1 != freq2)
            return false;
        return true;
    }
int main(){
    cout<<closeStrings("abc","bca");
}