#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node* left,*right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
Node* insertBST(Node* root,int val){
    if(root==NULL) {
        return new Node(val);
    }
    else if(root->data<val){
        root->right = insertBST(root->right,val);
    }else{
        root->left = insertBST(root->left,val);
    }
    return root;
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
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++) cin>>a[i];
    Node* root = insertBST(NULL,a[0]);
    for(int i = 1; i< n;i++) insertBST(root,a[i]);
    preOrder(root); cout<<endl;
    inOrder(root);
}