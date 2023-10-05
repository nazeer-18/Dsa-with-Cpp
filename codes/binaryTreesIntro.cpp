#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left, *right;
        Node(int val) {
            left = NULL;
            right = NULL;
            data = val;
        }
};
int main()
{
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    while(root!=NULL){
        cout<<root->data<<" ";
        root = root->right;
    }
    return 0;
}