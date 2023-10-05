//21161 Shaik Nazeer CSE-B
#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Node{
    public:
    int data;
    Node * left , * right;
    Node(int key) {
        data = key;
        left = right = NULL;
    }
};
int height(Node * root){
    if(root==NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node * root) {
    if(root == NULL) return true;
    if(!isBalanced(root->left)){
        return false;
    }
    if(!isBalanced(root->right)){
        return false;
    }
    if(abs(height(root->left)-height(root->right))>1) return false;
    return true;
}
bool isBalanced(Node* root, int * height) {
    if(root==NULL){
        *height = 0;
        return true;
    }
    int lh = 0, rh = 0;
    if(!isBalanced(root->left,&lh)) return false;
    if(!isBalanced(root->right,&rh)) return false;
    *height = max(lh,rh)+1;
    if(abs(lh-rh)>1) return false;
    return true;
}
int main()
{
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    //root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    int height = 0;
    if(isBalanced(root,&height)){
        cout<<"Balanced Tree\n";
    }
    else{
        cout<<"Not a Balanced Tree\n";
    }
    return 0;
}
/*
        1
    2         3
4       5   6   7
*/