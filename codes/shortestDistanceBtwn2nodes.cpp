#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
class Node
{
public:
    Node *left, *right;
    int data;
    Node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};
Node *LCA(Node *root, int n1, int n2)
{
    if (!root)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);
    if (left && right)
        return root;
    if (!left && !right)
        return NULL;
    if (left)
        return LCA(root->left, n1, n2);
    return LCA(root->right, n1, n2);
}
int findDist(Node *root, int key, int dist)
{
    if (!root)
        return -1;
    if (root->data == key)
        return dist;
    int left = findDist(root->left, key, dist + 1);
    if (left != -1)
        return left;
    return findDist(root->right, key, dist + 1);
}
int distanceBtwnNodes(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);
    int d1 = findDist(root, n1, 0);
    int d2 = findDist(root, n2, 0);
    return d1 + d2;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    cout << distanceBtwnNodes(root, 1, 4);
    return 0;
}