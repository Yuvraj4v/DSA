//leetcode problem number is 825
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    int numFriendRequests(vector<int>& ages) {
        int freq[121] = {};

        for (int age : ages) {
            freq[age]++;
        }

        int count = 0;

        for (int x = 1; x <= 120; x++) {
            for (int y = 1; y <= 120; y++) {

                if (y <= 0.5 * x + 7)
                    continue;

                if (y > x)
                    continue;

                if (y > 100 && x < 100)
                    continue;

                count += freq[x] * freq[y];

                if (x == y)
                    count -= freq[x];
            }
        }

        return count;
    }
int main(){
    vector<int> arr = {20,30,100,110,120};
    cout<<numFriendRequests(arr);
}