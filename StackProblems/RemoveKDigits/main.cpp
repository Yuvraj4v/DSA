//leecode problem number is 402
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
string removeKdigits(string num, int k) {
        stack<int> s;
        string ans = "";
        for (char c : num) {
            while (!s.empty() && s.top() > c && k > 0) {
                s.pop();
                k--;
            }
            s.push(c);
        }
        while (k > 0 && !s.empty()) {
            s.pop();
            k--;
        }

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
int main(){
    string s = "1432219";
    cout<<removeKdigits(s,3);
}