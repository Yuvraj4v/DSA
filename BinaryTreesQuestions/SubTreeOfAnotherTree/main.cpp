// leetcode problem number 572

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

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL || subRoot == NULL) {
            return root == subRoot;
        }

        if (root->val == subRoot->val && isSameTree(root, subRoot)) {
            return true;
        }

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};

int main() {
    Solution s;

    TreeNode* root = new TreeNode(3,
        new TreeNode(4, new TreeNode(1), new TreeNode(2)),
        new TreeNode(5));

    TreeNode* subRoot = new TreeNode(4,
        new TreeNode(1),
        new TreeNode(2));

    cout << (s.isSubtree(root, subRoot) ? "true" : "false");

    return 0;
}
