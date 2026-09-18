//leetcode problem number is 232
#include <iostream>
#include <stack>
using namespace std;

stack<int> s1;
stack<int> s2;

void push(int x) {
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(x);

    while (!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
}

int pop() {
    int ans = s1.top();
    s1.pop();
    return ans;
}

int peek() {
    return s1.top();
}

bool empty() {
    return s1.empty();
}

int main() {

    push(10);
    push(20);
    push(30);

    cout << "Front: " << peek() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Front: " << peek() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;

    cout << "Is Empty: " << (empty() ? "Yes" : "No") << endl;

    return 0;
}