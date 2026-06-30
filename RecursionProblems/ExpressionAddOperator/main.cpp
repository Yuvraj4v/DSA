//leetcode problem number is 282
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    void helper(string s , int target ,vector<string> &ans , int i , const string &path , long eval , long residual){
        if(i == s.length()){
            if(eval == target){
                ans.push_back(path);
            }
            return;
        }
        string currstr;
        long num = 0;
        for(int j = i ; j < s.size() ; j++){
            if(j>i && s[i]=='0'){
                break;
            }
            currstr += s[j];
            num = num*10 + s[j] - '0';
            if(i==0){
                helper(s,target,ans,j+1,path+currstr,num,num);
            }
            else{
                helper(s,target,ans,j+1,path+"+"+currstr,eval+num,num);
                helper(s,target,ans,j+1,path+"-"+currstr,eval-num,-num);
                helper(s,target,ans,j+1,path+"*"+currstr,eval-residual+residual*num,residual*num);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        helper(num,target,ans,0,"",0,0);
        return ans;
    }
int main(){
    string num = "123";
    int tar = 6;
    vector<string> result = addOperators(num,tar);
        for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
}