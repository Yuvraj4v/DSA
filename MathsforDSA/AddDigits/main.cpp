//leetcode problem number 258
#include <iostream>
using namespace std;

int addDigits(int num) {
    if (num == 0)
        return 0;

    return 1 + (num - 1) % 9;
}

int main() {
    int num;
    cin >> num;

    cout << addDigits(num);

    return 0;
}