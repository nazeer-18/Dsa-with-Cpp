#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int ans;
int solve(Node *root){
    if(!root) return 0;
    int val = root->data;
    int ls = solve(root->left);
    int rs = solve(root->right);
    ans = max(ans,max(max(ls+val,rs+val),ls+rs+val));
    return max(max(val,ls+val),rs+val);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    ans = INT_MIN;
    solve(root);
    cout<<ans<<endl;
    return 0;
}