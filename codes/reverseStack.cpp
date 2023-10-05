#include<bits/stdc++.h>
using namespace std;
void push_bottom(stack<int> &a, int val) {
    if(a.empty()){
        a.push(val);
        return;
    }
    int data = a.top();
    a.pop();
    push_bottom(a,val);
    a.push(data);
}
void reverseStack(stack<int> &a) {
    if(a.empty())
    {
        return ;
    }
    int val = a.top();
    a.pop();
    reverseStack(a);
    push_bottom(a,val);
}
void display (stack<int> a){
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;
}
int main() {
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    display(a);
    reverseStack(a);
    display(a);
    return 0;
}