//leecode problem number is 1209
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stack;
        for(char ch : s){
            if(stack.empty() || stack.top().first != ch){
                stack.push({ch,1});
            }else if(stack.top().first == ch){
                stack.top().second++;
            }
            if(stack.top().second == k){
                stack.pop();
            }
        }
        string ans = "";
        while(!stack.empty()){
            char ch = stack.top().first;
            int count = stack.top().second;

            while(count--){
                ans.push_back(ch); 
            }
            stack.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
    string s = "deeedbbcccbdaa";
    cout<<removeDuplicates(s,3);
}