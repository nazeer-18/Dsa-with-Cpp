#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class Node{
    public:
        int data;
        Node*left,*right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
bool areIdentical(Node *root1,Node *root2){
    if(!root1 && !root2){
        return true;
    }
    if(!root1 || !root2){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    return areIdentical(root1->left,root2->left)&&areIdentical(root1->right,root2->right);
}
int main()
{
    return 0;
}