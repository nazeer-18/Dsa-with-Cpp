#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left, *right;
        Node(int val){
            data = val;
            left=NULL;
            right=NULL;
        }
};
Node* LCA(Node* root,int n1,int n2){
    if(!root) return NULL;
    if(root->data== n1 || root->data == n2) return root;
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);
    if(left && right){
        return root;
    }else if(left) return left;
    else return right;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    Node* lca = LCA(root,3,6);
    cout<<((lca==NULL)?-1:lca->data);
    return 0;
}