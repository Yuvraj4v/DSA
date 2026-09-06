//leetcode problem number is 3019
#include<iostream>
#include<string>
using namespace std;
    int countKeyChanges(string s) {
        int count = 0;

        for (int i = 1; i < s.size(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                count++;
            }
        }

        return count;
    }
int main(){
    cout<<countKeyChanges("aAbBcC");
}