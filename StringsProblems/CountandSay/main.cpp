//leetcode problem number 38
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    string countAndSay(int n) {
        string ans = "1";

        for(int i = 2; i <= n; i++) {
            string temp = "";

            for(int j = 0; j < ans.size(); j++) {
                char ch = ans[j];
                int count = 1;

                while(j < ans.size()-1 && ans[j] == ans[j+1]) {
                    count++;
                    j++;
                }

                temp += to_string(count) + ch;
            }

            ans = temp;
        }

        return ans;
    }
int main(){
    int n = 3;
    cout<<countAndSay(n);
}