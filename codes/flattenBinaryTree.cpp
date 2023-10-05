#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};
void solve(Node *root, Node *&bottom)
{
    if (!root)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        bottom = root;
        return;
    }
    Node *lBtm = NULL, *rBtm = NULL;
    solve(root->left, lBtm);
    solve(root->right, rBtm);
    if (root->left && root->right)
    {
        lBtm->right = root->right;
        root->right = root->left;
        root->left = NULL;
        bottom = rBtm;
    }
    else if (root->left)
    {
        root->right = root->left;
        root->left = NULL;
        bottom = lBtm;
    }
    else if (root->right)
    {
        bottom = rBtm;
    }
}
int main()
{
    Node *temp = new Node(-1);
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    solve(root, temp);
    return 0;
}