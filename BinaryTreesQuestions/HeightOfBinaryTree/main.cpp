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

int height(Node* root){
    if(root == NULL)return 0;
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht,rightht)+1;
}

int main(){
    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(arr);
    cout<<"Height: "<<height(root)<<endl;
}