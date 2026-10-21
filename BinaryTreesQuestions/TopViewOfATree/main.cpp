#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
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
void Topview(Node* root){
    queue<pair<Node*,int>> q;
    map<int,int> m;
    q.push({root,0});
    while(q.size()>0){
        Node* curr = q.front().first;
        int currhd = q.front().second;
        q.pop();
        
        if(m.find(currhd) == m.end()){
            m[currhd] = curr->data;
        }
        if(curr->left != NULL){
            q.push({curr->left,currhd-1});
        }
        if(curr->right != NULL){
            q.push({curr->right,currhd+1});
        }
    }
    for(auto it : m){
        cout<<it.second<<" ";
    }
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(preorder);
    Topview(root);
}