//leetcode problem number is 1486
#include<iostream>
#include<vector>
using namespace std; 
    int xorOperation(int n, int start) {
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            int element = start + 2 * i;
            ans ^= element;
        }
        return ans;
    }
int main(){
    cout<<xorOperation(5,0);
}