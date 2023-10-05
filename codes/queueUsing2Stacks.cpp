#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
        void enqueue(int x) {
            s1.push(x);
        }
        int dequeue() {
            if(s1.empty() && s2.empty()) {
                cout<<"Underflow queue is empty\n";
                return -1;
            }
            else {
                if(s2.empty()) {
                    while(!s1.empty()) {
                        s2.push(s1.top());
                        s1.pop();
                    }
                }
                int val = s2.top();
                s2.pop();
                return val;
            }
        }
        bool empty() {
            return s1.empty() && s2.empty();
        }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.dequeue()<<endl;
    q.enqueue(4);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}