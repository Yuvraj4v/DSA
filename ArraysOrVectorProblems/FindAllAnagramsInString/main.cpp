//leetcode problem number is 438
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
vector<int> findAnagrams(string s, string p) {
        int left = 0;
        int right = 0;
        vector<int> ans;
        unordered_map<char, int> mp;
        unordered_map<char, int> mps;
        for (int i = 0; i < p.size(); i++) {
            mp[p[i]]++;
        }
        while (right < s.size()) {
            mps[s[right]]++;
            if (right - left + 1 == p.size()) {
                if (mps == mp) {
                    ans.push_back(left);
                }
                mps[s[left]]--;
                if (mps[s[left]] == 0) {
                    mps.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        return ans;
    }
int main(){
    vector<int> result = findAnagrams("cbaebabacd","abc");
    for(int x : result){
        cout<<x<<" ";
    }
}