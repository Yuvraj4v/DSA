//leetcode problem number 796
#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    bool rotateString(string s, string goal) {
     int m = s.length();
     int n = goal.length();
     if(m!=n){
        return false;
     }
     if((s+s).find(goal) != string::npos){
        return true;
     }
     return false;
    }
int main(){
    string s = "abcde";
    string goal = "cdeab";
    cout<<rotateString(s,goal);
}