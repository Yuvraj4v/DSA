//leetcode problem number is 231
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n-1)) == 0;
    }
int main(){
    cout<<isPowerOfTwo(64);
}