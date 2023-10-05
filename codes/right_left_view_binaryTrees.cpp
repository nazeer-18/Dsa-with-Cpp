// 21161 Shaik Nazeer CSE-B
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};
vector<int> rightView(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp)
        {
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
        if (!q.empty() && q.front() == NULL)
        {
            ans.push_back(temp->data);
        }
    }
    return ans;
}
vector<int> leftView(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    ans.push_back(root->data);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp)
        {
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            ans.push_back(q.front()->data);
        }
    }
    return ans;
}
void print(vector<int> a)
{
    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    vector<int> ans1,ans2;
    ans1 = rightView(root);
    print(ans1);
    ans2 = leftView(root);
    print(ans2);
    return 0;
}