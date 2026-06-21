//leetcode problem number 1614
#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    int maxDepth(string s) {
        int count = 0;
        int ans = INT_MIN;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            ans = max(ans,count);
        }
        return ans;
    }
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
}