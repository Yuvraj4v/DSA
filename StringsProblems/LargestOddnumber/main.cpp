//leetcode problem number 1903
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
int main(){
    string num = "35427";
    cout<<largestOddNumber(num);
}