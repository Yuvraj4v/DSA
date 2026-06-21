//leetcode problem number 1922
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
    long long mod = 1e9 + 7;

    long long power(long long x, long long n){
        long long ans = 1;

        while(n > 0){
            if(n % 2 == 1){
                ans = (ans * x) % mod;
            }
            x = (x * x) % mod;
            n /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % mod;
    }
int main(){
    int n = 4;
    cout<<countGoodNumbers(n);
}
