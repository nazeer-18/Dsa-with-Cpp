#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left ;
        Node *right;
        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};
void preorder(Node* root) {
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
void inorder(Node * root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void postorder(Node * root) {
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
int main() {
    Node *root = new Node(100);
    root->left = new Node(50);
    root->right = new Node(150);
    //root->left->left = new Node(4);
    root->left->right = new Node(75);
    root->left->right->left = new Node(74);
    root->left->right->left->left = new Node(73);
    root->left->right->right = new Node(76);
    root->right->left = new Node(125);
    root->right->left->right = new Node(130);
    root->right->left->right->right = new Node(131);
    root->right->left->left = new Node(124);
    inorder(root);cout<<endl;
    preorder(root); cout<<endl;
    postorder(root);cout<<endl;
}