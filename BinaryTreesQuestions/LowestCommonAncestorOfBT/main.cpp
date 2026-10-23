// leetcode problem number is 236
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node *buildtree(vector<int> pre)
{
    idx++;

    if (pre[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(pre[idx]);
    root->left = buildtree(pre);
    root->right = buildtree(pre);

    return root;
}

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root == p || root == q)
    {
        return root;
    }

    Node *leftlca = lowestCommonAncestor(root->left, p, q);
    Node *rightlca = lowestCommonAncestor(root->right, p, q);

    if (leftlca != NULL && rightlca != NULL)
    {
        return root;
    }
    else if (leftlca != NULL)
    {
        return leftlca;
    }
    else
    {
        return rightlca;
    }
}

int main()
{
    vector<int> preorder = {
        1, 2, 7, -1, -1, -1,
        3, 4, -1, -1, 5, -1, -1};

    idx = -1;
    Node *root = buildtree(preorder);

    Node *p = root->left->left;
    Node *q = root->right->left;

    Node *lca = lowestCommonAncestor(root, p, q);

    if (lca != NULL)
    {
        cout << "Lowest Common Ancestor: " << lca->data << endl;
    }
    else
    {
        cout << "LCA not found" << endl;
    }

    return 0;
}