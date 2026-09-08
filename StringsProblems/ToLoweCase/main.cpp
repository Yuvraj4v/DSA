//leetcode problem number is 709
#include<iostream>
#include<string>
using namespace std;
    string toLowerCase(string s) {
        for(char &c : s){
            if(c >= 'A' && c <= 'Z'){
                c = c + 32;
            }
        }
        return s;
    }
int main(){
    string s = "HELLO";
    cout<<toLowerCase(s);
}