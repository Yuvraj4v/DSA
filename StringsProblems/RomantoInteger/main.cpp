//leetcode problem number 13
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    int romanToInt(string s) {
        unordered_map<char, int> m = {
            {'I',1}, {'V',5}, {'X',10},
            {'L',50}, {'C',100},
            {'D',500}, {'M',1000}
        };
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(i==s.size()-1){
                ans += m[s[i]];
            }
            else if(m[s[i]]>=m[s[i+1]]){
                ans += m[s[i]];
            }
            else{
                ans -= m[s[i]];
            }
        }
        return ans;
    }
int main(){
    string s = "III";
    cout<<romanToInt(s);
}