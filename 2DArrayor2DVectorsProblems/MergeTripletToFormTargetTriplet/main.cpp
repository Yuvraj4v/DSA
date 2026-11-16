//leetcode problem number 1899
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool a = false, b = false, c = false;

        for (auto &t : triplets) {
            if (t[0] > target[0] || t[1] > target[1] || t[2] > target[2])
                continue;

            if (t[0] == target[0]) a = true;
            if (t[1] == target[1]) b = true;
            if (t[2] == target[2]) c = true;
        }

        return a && b && c;
    }
int main(){
    vector<vector<int>> arr = {{2,5,3},{1,8,4},{1,7,5}};
    vector<int> tar = {2,7,5};
    cout<<mergeTriplets(arr,tar);
}