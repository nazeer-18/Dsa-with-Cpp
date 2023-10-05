#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q;
    public:
        void push(int val){
            queue<int>temp;
            temp.push(val);
            while(!q.empty()){
                temp.push(q.front());
                q.pop();
            }
            swap(q,temp);
        }
        void pop() {
            if(q.empty()) {
                cout<<"stack underflow no elements to pop\n";
            }
            else{
                q.pop();
            }
        }
        bool empty() {
            return q.empty();
        }
        int top() {
            if(q.empty()) {
                cout<<"Stack underflow\n";
                return -1;
            }
            return q.front();
        }
        int size() {
            return q.size();
        }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}