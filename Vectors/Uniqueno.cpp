#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
    }
};

int main() {
    vector<int> vec = {4, 1, 2, 1, 2};
    Solution s;

    int result = s.singleNumber(vec);
    cout << "Unique number is: " << result << endl;

    return 0;
}
