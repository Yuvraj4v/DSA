//leetcode problem number is 155
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

stack<pair<int, int>> s;

void push(int value) {
    if (s.empty()) {
        s.push({value, value});
    } else {
        int minval = min(value, s.top().second);
        s.push({value, minval});
    }
}

void pop() {
    s.pop();
}

int top() {
    return s.top().first;
}

int getMin() {
    return s.top().second;
}

int main() {

    push(5);
    push(3);
    push(7);
    push(2);

    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    pop();

    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    return 0;
}