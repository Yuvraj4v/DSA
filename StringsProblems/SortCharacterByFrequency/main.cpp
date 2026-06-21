//leetcode problem number 451
#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
static bool cmd(pair<char,int> a, pair<char,int> b){ 
        return a.second > b.second; 
    } 

    string frequencySort(string s) { 
        vector<pair<char,int>> v(128);
        for(int i = 0; i < 128; i++){ 
            v[i] = {(char)i, 0}; 
        } 
        for(int i = 0; i < s.size(); i++){ 
            v[s[i]].second++; 
        } 
        sort(v.begin(), v.end(), cmd); 
        string result = ""; 
        for(int i = 0; i < v.size(); i++){ 
            if(v[i].second == 0) break;
            
            for(int j = 0; j < v[i].second; j++){ 
                result.push_back(v[i].first); 
            } 
        } 
        return result; 
    } 
int main(){
    string s = "tree";
    cout<<frequencySort(s);
}
