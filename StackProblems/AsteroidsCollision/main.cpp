//leetcode problem number is 735
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> ans;
        for (int asteroid : asteroids) {
            bool destroyed = false;

            while (!s.empty() && s.top() > 0 && asteroid < 0) {
                if (s.top() < -asteroid) {
                    s.pop();
                }
                else if (s.top() == -asteroid) {
                    s.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                s.push(asteroid);
            }
        }    
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
int main(){
    vector<int> arr = {5,10,-5};
    vector<int> result = asteroidCollision(arr);
    for(int x : result){
        cout<<x<<" ";
    }
}