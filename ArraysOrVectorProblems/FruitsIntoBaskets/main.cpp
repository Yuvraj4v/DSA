//leetcode problem number is 904
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int totalFruit(vector<int>& fruits) {
        int left = 0;
        unordered_map<int,int> mp;
        int ans = 0;
        for(int right = 0 ; right < fruits.size() ; right++){
            mp[fruits[right]]++;
            while(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,2,1};
    cout<<totalFruit(arr);
}