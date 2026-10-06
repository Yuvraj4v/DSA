//leetcode problem number is 953
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos(26);

        for (int i = 0; i < 26; i++) {
            pos[order[i] - 'a'] = i;
        }

        for (int i = 0; i < words.size() - 1; i++) {
            string &a = words[i];
            string &b = words[i + 1];

            int len = min(a.size(), b.size());
            bool different = false;

            for (int j = 0; j < len; j++) {
                if (a[j] != b[j]) {
                    if (pos[a[j] - 'a'] > pos[b[j] - 'a'])
                        return false;

                    different = true;
                    break;
                }
            }

            if (!different && a.size() > b.size())
                return false;
        }

        return true;
    }
int main(){
    vector<string> w = {"hello","leetcode"};
    string o = "hlabcdefgijkmnopqrstuvwxyz";
    cout<<isAlienSorted(w,o);
}