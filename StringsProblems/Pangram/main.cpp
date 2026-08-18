//leetcode problem number 1832
#include<iostream>
#include<string>
using namespace std;
    bool checkIfPangram(string sentence) {
        int freq[26] = {};

        for (char ch : sentence) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                return false;
            }
        }

        return true;
    }
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<checkIfPangram(s);

}