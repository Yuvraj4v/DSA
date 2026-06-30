//leetcode problem number is 17
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    string cases(char digits){
        switch(digits){
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
        }
        return "";
    }
    void generatecombination(int i , string &current , string &digits , vector<string> &ans){
        if(i == digits.length()){
            ans.push_back(current);
            return;
        }
        string letters = cases(digits[i]);
        for(int j = 0 ; j < letters.size() ; j++){
            current.push_back(letters[j]);
            generatecombination(i+1,current,digits,ans);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string current = "";
        generatecombination(0,current,digits,ans);
        return ans;
        
    }
int main(){
    string digits = "23";
    vector<string> result = letterCombinations(digits);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
}