#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int a = 20,b = 28;
    cout<<gcd(a,b);
}