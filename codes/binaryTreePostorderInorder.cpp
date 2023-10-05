#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *right,*left;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
int search(int inOrder[],int start, int end,int val) {
    for(int i = start; i<= end; i++){
        if(inOrder[i]==val) return i;
    }
    return -1;
}
Node * buildTree(int postOrder[], int inOrder[], int start, int end) {
    static int idx = 6;
    Node * newNode = new Node(postOrder[idx]);
    if(start>end) return NULL;
    int pos = search(inOrder,start,end,postOrder[idx]);
    idx--;
    newNode->right = buildTree(postOrder,inOrder,pos+1,end);
    newNode->left = buildTree(postOrder,inOrder,start,pos-1);
    return newNode;
}
void inorder(Node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int postOrder [] = {4,5,2,6,7,3,1};
    int inOrder [] = {4,5,2,1,6,3,7};
    Node * root = buildTree(postOrder,inOrder,0,6);
    inorder(root);
    return 0;
}
/*
      1
  2      3
4   5  6   7
*/