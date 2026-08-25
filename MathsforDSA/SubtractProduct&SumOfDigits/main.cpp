//leetcode problem number is 1281
#include <iostream>
using namespace std;
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n != 0){
            int i = n % 10;
            product *= i;
            sum += i;
            n /= 10;
        }
        return product - sum;
    }
int main(){
    cout<<subtractProductAndSum(234);
}