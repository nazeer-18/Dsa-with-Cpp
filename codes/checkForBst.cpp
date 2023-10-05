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
bool isBst(Node *root,int mini,int maxi){
    if(!root) return true;
    if(root->data<mini || root->data >maxi) return false;
    return isBst(root->left,mini,root->data) && isBst(root->right,root->data,maxi);
}
int main()
{
    Node* root;
    cout<<isBst(root,INT_MIN,INT_MAX);
    return 0;
}