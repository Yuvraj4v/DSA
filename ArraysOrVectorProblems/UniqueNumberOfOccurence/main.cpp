//leetcode problem number is 896
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> st;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto it : freq) {
            if (st.count(it.second)) {
                return false;
            }
            st.insert(it.second);
        }

        return true;
    }
int main(){
    vector<int> arr = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);
}
