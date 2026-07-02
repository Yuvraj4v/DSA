//leetcode problem number is 424
#include <iostream>
#include <unordered_map>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int maxfreq = 0;
        int maxlen = 0;
        unordered_map<char,int> hash;
        while(right < s.size()){
            hash[s[right]]++;
            maxfreq = max(maxfreq,hash[s[right]]);
            if((right - left + 1) - maxfreq > k){
                hash[s[left]]--;
                left = left + 1;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
int main(){
    string s = "ABAB";
    cout<<characterReplacement(s,2);
}