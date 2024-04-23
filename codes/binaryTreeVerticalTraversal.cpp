#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> ans;
        map<int,vector<int>> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        int line = 0;
        Node *temp;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            temp = it.first;
            line = it.second;
            mp[line].push_back(temp->data);
            if(temp->left) q.push({temp->left,line-1});
            if(temp->right) q.push({temp->right,line+1});
        }
        for(auto i :mp){
            for(auto j: i.second) ans.push_back(j);
        }
        return ans;
    }
int main(){
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);
    vector<int> ans = verticalOrder(root);
    for(auto i: ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}