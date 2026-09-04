//leetcode problem number is 155
#include <iostream>
#include <stack>
using namespace std;

stack<long long> s;
long long minval;

void push(int value) {
    if (s.empty()) {
        s.push(value);
        minval = value;
    }
    else if (value < minval) {
        s.push(2LL * value - minval);
        minval = value;
    }
    else {
        s.push(value);
    }
}

void pop() {
    if (s.top() < minval) {
        minval = 2LL * minval - s.top();
    }
    s.pop();
}

int top() {
    if (s.top() < minval) {
        return minval;
    }
    else {
        return s.top();
    }
}

int getMin() {
    return minval;
}

int main() {

    push(5);
    push(3);
    push(7);
    push(2);

    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    pop();

    cout << "After pop:" << endl;
    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    return 0;
}