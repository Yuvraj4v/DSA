//leetcode problem number 22
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    void getparanthesis(vector<string> &v,int n,int opencount,int closecount,string s){
        if(opencount == n && closecount == n){
            v.push_back(s);
            return;
        }
        if(opencount<n){
            getparanthesis(v,n,opencount+1,closecount,s+"(");
        }
        if(closecount<opencount){
            getparanthesis(v,n,opencount,closecount+1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int opencount = 0;
        int closecount = 0;
        getparanthesis(v,n,opencount,closecount,"");
        return v;
    }
int main(){
    int n = 3;
    vector<string> result = generateParenthesis(n);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
}