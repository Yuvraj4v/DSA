//leetcode problem number 686
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    int repeatedStringMatch(string a, string b) {
        string temp = a;
        int count = 1;

        while(temp.size() < b.size()) {
            temp += a;
            count++;
        }

        if(temp.find(b) != string::npos) {
            return count;
        }

        temp += a;
        count++;

        if(temp.find(b) != string::npos) {
            return count;
        }

        return -1;
    }
int main(){
    string a = "abcd";
    string b = "cdabcdab";
    cout<<repeatedStringMatch(a,b);
}