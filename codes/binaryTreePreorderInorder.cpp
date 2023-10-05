#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
int search(int inorder[], int start, int end , int val) {
    for(int i = start; i <= end; i++){
        if(inorder[i] == val) {
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[], int start, int end){
    if(start>end) return NULL;
    static int idx = 0;
    int val = preorder[idx];
    idx++;
    Node * newNode = new Node(val);
    if(start==end) {
        return newNode;
    }
    int pos = search(inorder,start,end,val);
    newNode->left = buildTree(preorder,inorder,start,pos-1);
    newNode->right = buildTree(preorder,inorder,pos+1,end);
    return newNode;
}
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postorder(Node * root) {
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
int main()
{
    int preorder[] = {1,2,4,3,5,7,6,8,9};
    int inorder[] = {4,2,1,5,7,3,8,6,9};
    Node * root =  buildTree(preorder,inorder,0,8);
    preOrder(root);cout<<endl;
    inOrder(root);cout<<endl;
    postorder(root);cout<<endl;
    return 0;
}