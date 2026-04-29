//leetcode question number 204
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int countPrimes(int n) {
        int count = 0;
        vector<bool> isPrime(n+1,true);
        for(int i =2; i<n ;i++){
            if(isPrime[i]){
                count++;
                for(int j = i*2; j<n ;j=j+i){
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
int main(){
    int n = 50;
    cout<<countPrimes(n);
}