#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left, *right;
        Node(int key) {
            data = key;
            left = right = NULL;
        }
};
void sumReplace(Node* &root) {
    if(root==NULL) return;
    sumReplace(root->left);
    sumReplace(root->right);
    root->data += (root->left?root->left->data:0) + (root->right?root->right->data:0);
    cout<<root->data<<"  ";
}
int main() {
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int height = 0;
    sumReplace(root);
    return 0;
}
//         1
//     2           3
// 4       5   6       7

//         28
//     11          16
// 4       5   6       7


