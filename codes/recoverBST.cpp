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
        left = right = NULL;
    }
};
void inorder(Node *root, Node *&first, Node *&second, Node *&last, Node *&prev)
{
    if (!root)
        return;
    inorder(root->left, first, second, last, prev);
    if (prev && root->data < prev->data)
    {
        if (first)
        {
            last = root;
            return;
        }
        else
        {
            first = prev;
            second = root;
        }
    }
    prev = root;
    inorder(root->right, first, second, last, prev);
}
Node *correctBST(Node *root)
{
    Node *f = NULL, *s = NULL, *l = NULL, *prev = NULL;
    inorder(root, f, s, l, prev);
    if (l)
    {
        swap(f->data, l->data);
    }
    else
    {
        swap(f->data, s->data);
    }
    return root;
}
int main()
{
    return 0;
}