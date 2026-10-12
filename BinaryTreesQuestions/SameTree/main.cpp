// leetcode problem number 100
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;
        }

        bool isleftsame = isSameTree(p->left, q->left);
        bool isrightsame = isSameTree(p->right, q->right);

        return isleftsame && isrightsame && p->val == q->val;
    }
};

int main() {
    Solution s;

    TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* q = new TreeNode(1, new TreeNode(2), new TreeNode(3));

    cout << (s.isSameTree(p, q) ? "true" : "false");

    return 0;
}
