//leetcode problem number is 901
#include <iostream>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> s;

public:
    StockSpanner() {
    }

    int next(int price) {
        int span = 1;

        while (!s.empty() && s.top().first <= price) {
            span += s.top().second;
            s.pop();
        }

        s.push({price, span});

        return span;
    }
};

int main() {
    StockSpanner stock;

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

    for (int price : prices) {
        cout << stock.next(price) << " ";
    }

    cout << endl;

    return 0;
}