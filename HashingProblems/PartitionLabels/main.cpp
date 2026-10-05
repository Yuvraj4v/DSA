//leetcode problem number is 763
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> mp;
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]] = i;
        }
        for(int i = 0 ; i < s.size() ; i++){
            end = max(end,mp[s[i]]);

            if(i == end){
                int partitionlength = i - start + 1;
                ans.push_back(partitionlength);
                start = i + 1;
            }
        }
        return ans;
    }
int main(){
    string s = "ababcbacadefegdehijhklij";
    vector<int> result = partitionLabels(s);
    for(int x : result){
        cout<<x<<" ";
    }
}