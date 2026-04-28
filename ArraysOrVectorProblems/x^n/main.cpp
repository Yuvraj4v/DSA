#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long N = n;
    
    if(N < 0){
        x = 1/x;
        N = -N;
    }

    double result = 1;

    while(N > 0){
        if(N % 2 == 1){
            result = result * x;
        }

        x = x * x;
        N = N / 2;
    }

    return result;
}

int main(){
    double x;
    int n;

    cout<<"Enter x and n: ";
    cin>>x>>n;

    cout<<"Result: "<<myPow(x,n);

    return 0;
}