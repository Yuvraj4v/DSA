//leetcode problem number is 2942
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) {
                ans.push_back(i);
            }
        }

        return ans;
    }
int main(){
    vector<string> arr = {"leet","code"};
    vector<int> result = findWordsContaining(arr,'e');
    for(int val : result){
        cout<<val<<" ";
    }
}