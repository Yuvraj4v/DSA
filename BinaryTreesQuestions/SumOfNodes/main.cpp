#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node* buildtree(vector<int> pre){
    idx++;

    if(pre[idx] == -1){
        return NULL;
    }
    Node* root = new Node(pre[idx]);
    root->left = buildtree(pre);
    root->right = buildtree(pre);

    return root;
}

int sum(Node* root){
    if(root == NULL)return 0;
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    return leftsum + rightsum + root->data;
}

int main(){
    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(arr);
    cout<<"Sum: "<<sum(root);
}