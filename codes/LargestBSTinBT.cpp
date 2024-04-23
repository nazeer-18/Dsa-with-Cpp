#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class Node{
    public:
        int data;
        Node* left,*right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};
//min max isBST size ans
vector<int> help(Node* root){
    if(!root) return {INT_MAX,INT_MIN,1,0,0};
    vector<int> lt = help(root->left);
    vector<int> rt = help(root->right);
    vector<int> curr (5,0);
    curr[3]=1+lt[3]+rt[3];
    if(root->data>lt[1] && root->data<rt[0] && lt[2]==1 && rt[2]==1){
        curr[0]=min(root->data,lt[0]);
        curr[1]=max(root->data,rt[1]);
        curr[2]=1;
        curr[4]=curr[3];
        return curr;
    }
    curr[4]=max(lt[4],rt[4]);
    return curr;

}
int largestBST(Node* root){
    return help(root)[4];
}
int main()
{
    Node* root;
    cout<<largestBST(root);
    return 0;
}