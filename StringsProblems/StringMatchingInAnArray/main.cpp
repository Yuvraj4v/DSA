//leetcode problem number 1408
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
int main(){
    vector<string> arr = {"mass","as","hero","superhero"};
    vector<string> result = stringMatching(arr);
    for(string ch : result){
        cout<<ch<<" ";
    }
}