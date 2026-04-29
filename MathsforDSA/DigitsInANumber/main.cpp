#include<iostream>
#include<vector>
using namespace std;
void printdigit(int n){
    int count = 0;
    while (n!= 0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout<<count;
}
int main(){
    int n = 358;
    printdigit(n);
}