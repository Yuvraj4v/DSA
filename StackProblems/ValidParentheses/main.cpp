//leetcode problem number is 20
#include<iostream>
#include<string>
#include<stack>
using namespace std;
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.size() == 0){
                    return false;
                }
                if(st.top() == '(' && c == ')' || st.top() == '{' && c == '}' || st.top() == '[' && c == ']'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
int main(){
    string s = "({[]})";
    cout<<isValid(s);
}