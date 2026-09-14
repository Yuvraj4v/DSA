//leetcode problem number is 202
#include <iostream>
using namespace std;
    int nextnum(int n){
        int sum = 0;
        while(n>0){
            int digit = n % 10;
            sum += digit*digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = nextnum(n);
        while(fast != 1 && slow != fast){
            slow = nextnum(slow);
            fast = nextnum(nextnum(fast));
        }
        return fast == 1;
    }
int main(){
    cout<<isHappy(19);
}