//leetcode problem number is 28
#include <iostream>
#include <vector>
#include <string>
using namespace std;
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(m==0){
            return 0;
        }
        if(m>n){
            return -1;
        }
        for(int i = 0 ; i < n ; i++){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,m)==needle){
                    return i;
                }
            }
        }
        return -1;
    }
int main(){
    string s1 = "sadbutsad";
    string s2 = "sad";
    cout<<strStr(s1,s2);
}