//leetcode problem number 921
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    int minAddToMakeValid(string s) {
        int count = 0;
        int counter = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
                if(count<0){
                    counter++;
                    count = 0;
                }
            }
        }
        return count+counter;
    }
int main(){
    string s = "())";
    cout<<minAddToMakeValid(s);
}