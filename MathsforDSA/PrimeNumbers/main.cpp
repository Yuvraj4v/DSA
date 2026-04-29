//to check that given number is prime or not
#include<iostream>
#include<vector>
using namespace std;
string checkprime(int n){
    for(int i = 2; i*i <=n;i++){
        if(n%i==0){
            return "Non Prime";
        }
    }
    return "Prime";
}
int main(){
    int n = 29;
    cout<<checkprime(n);
}