#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1;
    queue<int> q2;
    public:
        void push(int val) {
            q1.push(val);
        }
        void pop() {
            if(q1.empty()) {
                cout<<"stck underflow \n";
            }
            else{
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                }
                q1.pop();
                swap(q1,q2);
            }
        }
        bool empty() {
            return q1.empty();
        }
        int top() {
            if(q1.empty()) {
                cout<<"stack underflow no elements in stack\n";
                return -1;
            }
            else {
                while(q1.size()!=1) {
                    q2.push(q1.front());
                    q1.pop();
                }
                int val = q1.front();
                q2.push(val);
                q1.pop();
                swap(q1,q2);
                return val;
            }
        }
        int size(){ 
            return q1.size();
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
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
}