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
vector<int> ans;
void printSub(Node *root, int k)
{
    if (!root)
        return;
    if (k == 0)
    {
        ans.push_back(root->data);
        return;
    }
    printSub(root->left, k - 1);
    printSub(root->right, k - 1);
}
int findAll(Node *root, int target, int k)
{
    if (!root)
        return -1;
    if (root->data == target)
    {
        printSub(root, k);
        return 0; // distance from target -> 0
    }
    int ld = findAll(root->left, target, k);
    if (ld != -1)
    {
        if (ld + 1 == k)
        {
            ans.push_back(root->data);
        }
        else
        {
            printSub(root->right, k - ld - 2);
        }
        return ld + 1;
    }
    int rd = findAll(root->right, target, k);
    if (rd != -1)
    {
        if (rd + 1 == k)
        {
            ans.push_back(root->data);
        }
        else
        {
            printSub(root->left, k - rd - 2);
        }
        return rd + 1;
    }
    return -1;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(5);
    root->left->left = new Node(6);
    root->left->left->right = new Node(7);
    root->left->left->right->left = new Node(8);
    root->left->left->right->right = new Node(9);
    root->right = new Node(2);
    root->right->left = new Node(3);
    root->right->right = new Node(4);
    int target = 5, k= 3;
    ans.clear();
    findAll(root, target, k);
    sort(ans.begin(), ans.end());
    for(auto i : ans) cout<<i<<" ";
}