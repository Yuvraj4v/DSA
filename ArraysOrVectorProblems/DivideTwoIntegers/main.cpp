//leetcode problem number is 29
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
    int divide(int dividend, int divisor) {
        if (dividend == divisor) {
            return 1;
        }
        bool sign = true;
        if (dividend <= 0 && divisor > 0) {
            sign = false;
        }
        if (dividend >= 0 && divisor < 0) {
            sign = false;
        }
        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);
        long long quotient = 0;
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count += 1;
            }
            quotient += (1LL << count);
            n -= (d << count);
        }
        if (quotient == (1LL << 31) && sign) {
            return INT_MAX;
        }
        if (quotient == (1LL << 31) && !sign) {
            return INT_MIN;
        }

        return sign ? quotient : -quotient;
    }
int main(){
    cout<<divide(10,3);
}