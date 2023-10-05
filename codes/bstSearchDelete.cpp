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
Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    else if (root->data < val)
    {
        root->right = insertBST(root->right, val);
    }
    else
    {
        root->left = insertBST(root->left, val);
    }
    return root;
}
Node *searchBST(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == val)
    {
        return root;
    }
    else if (root->data < val)
    {
        return searchBST(root->right, val);
    }
    else
    {
        return searchBST(root->left, val);
    }
}
Node *deleteNode(Node *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data < x)
    {
        root->right = deleteNode(root->right, x);
    }
    else if (root->data > x)
    {
        root->left = deleteNode(root->left, x);
    }
    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }
        else
        {
            Node *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = insertBST(NULL, a[0]);
    for (int i = 1; i < n; i++)
        insertBST(root, a[i]);
    if (searchBST(root, 4))
    {
        cout << "key exists\n";
    }
    else
    {
        cout << "Key doesnot exist\n";
    }
    return 0;
}