#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class Node{
    public:
        int data;
        Node* left,*right;
        Node(int key){
            data = key;
            left = NULL;
            right = NULL;
        }
};
Node* buildBST(vector<int> a,int l,int h){
    if(l>h) return NULL;
    int mid = (l+(h-l)/2);
    Node * temp = new Node(a[mid]);
    temp->left = buildBST(a,l,mid-1);
    temp->right = buildBST(a,mid+1,h);
    return temp;
}
void preOrder(Node *root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n,0);
    loop(i,n) cin>>a[i];
    Node * root = buildBST(a,0,n-1);
    preOrder(root);
    cout<<endl;
    return 0;
}