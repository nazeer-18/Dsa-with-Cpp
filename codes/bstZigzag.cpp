#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class Node{
    public:
        Node * left,* right;
        int data;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void zigzag(Node * root){
    stack<Node*> curr;
    stack<Node*> next;
    bool ltor = true;
    curr.push(root);
    vector<int>ans;
    while(!curr.empty()){
        while(!curr.empty()){
            Node* temp = curr.top();
            curr.pop();
            ans.push_back(temp->data);
            if(ltor){
                if(temp->left) next.push(temp->left);
                if(temp->right) next.push(temp->right);
            }else{
                if(temp->right) next.push(temp->right); 
                if(temp->left) next.push(temp->left);
            }
        }
        swap(curr,next);
        ltor = !ltor;
    }
}
int main()
{
    
    return 0;
}