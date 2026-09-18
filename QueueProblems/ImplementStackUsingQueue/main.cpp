//leetcode problem number is 225
#include <iostream>
#include <queue>
using namespace std;

queue<int> q1;
queue<int> q2;

void push(int x) {
    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }

    q1.push(x);

    while (!q2.empty()) {
        q1.push(q2.front());
        q2.pop();
    }
}

int pop() {
    int ans = q1.front();
    q1.pop();
    return ans;
}

int top() {
    return q1.front();
}

bool empty() {
    return q1.empty();
}

int main() {

    push(10);
    push(20);
    push(30);

    cout << "Top: " << top() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Top: " << top() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;

    cout << "Is Empty: " << (empty() ? "Yes" : "No") << endl;

    return 0;
}