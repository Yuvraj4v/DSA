//leetcode problem number 1781
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    int beautySum(string s) {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            vector<int> freq(26,0);
            for(int j = i ; j < s.size() ; j++){
                freq[s[j] - 'a']++;
                int maxi = 0;
                int mini = INT_MAX;
                for(int k = 0 ; k < 26 ; k++){
                    if(freq[k]>0){
                        maxi=max(maxi,freq[k]);
                        mini=min(mini,freq[k]);
                    }
                }
                ans += (maxi-mini);
            }
        }
        return ans;
    }
int main(){
    string s = "aabcb";
    cout<<beautySum(s);
}