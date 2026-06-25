// leetcode problem number is 131
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    bool ispallindrome(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s == s2;
    }
    void getallparts(string s , vector<string> &partition ,vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back(partition);
            return;
        }
        for(int i = 0 ; i < s.size() ; i++){
            string part = s.substr(0,i+1);
            if(ispallindrome(part)){
                partition.push_back(part);
                getallparts(s.substr(i+1),partition,ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;
        getallparts(s,partition,ans);
        return ans;
    }
int main(){
    string s = "aab";
    vector<vector<string>> result = partition(s);
    for(int i = 0 ; i < result.size() ; i++){
        for(int j = 0 ; j < result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}