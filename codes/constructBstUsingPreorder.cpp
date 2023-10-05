#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class Node{
    public:
        int data;
        Node *left, *right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
int n;
Node* bst(int a[],int mini,int maxi,int* i){

    if(*i>=n) return NULL;
    Node* root = NULL;
    int key = a[*i];
    if(key>mini && key<maxi){
        root = new Node(key);    
        *i = *i +1;
        if(*i<n){
            root->left = bst(a,mini,key,i); 
        }
        if(*i<n){
            root->right = bst(a,key,maxi,i);
        }
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    int i=0;
    Node* root = bst(a,INT_MIN,INT_MAX,&i);
    inorder(root); cout<<endl;
    preorder(root); cout<<endl;
    return 0;
}