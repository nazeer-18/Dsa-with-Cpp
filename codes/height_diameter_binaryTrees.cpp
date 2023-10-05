#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
int getHeight(Node *root){
    if(root==NULL) return 0;
    return max(getHeight(root->left),getHeight(root->right))+1;
}
int getDiameter(Node* root){
    if(root==NULL) return 0;
    int currDiameter = getHeight(root->left)+getHeight(root->right)+1;
    return max(currDiameter,max(getDiameter(root->left),getDiameter(root->right)));
}
//optimized way to find dimeter
int getDiameter(Node * root, int *height) {
    if(root==NULL) {
        *height= 0; 
        return 0;
    }
    int leftHeight = 0, rightHeight = 0;
    int leftDiameter = getDiameter(root->left, &leftHeight);
    int rightDiameter = getDiameter(root->right, &rightHeight);
    int currDiameter = leftHeight + rightHeight + 1;
    *height = max(leftHeight,rightHeight)+1;
    return max(currDiameter,max(leftDiameter,rightDiameter));
}
int main() {
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    int height = 0;
    cout<<getHeight(root)<<endl;
    cout<<getDiameter(root)<<endl;
    cout<<getDiameter(root,&height)<<endl;
    return 0;
}