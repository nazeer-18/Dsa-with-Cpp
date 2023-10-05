#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1;
    public:
        void enqueue(int x) {
            s1.push(x);
        }
        int dequeue() {
            if(s1.empty()) {
                cout<<"Underflow queue is empty\n";
                return -1;
            }
            int res = s1.top();
            s1.pop();
            if(s1.empty()) {
                return res; 
            }
            int val = dequeue();
            s1.push(res);
            return val;
        }
        bool empty() {
            return s1.empty();
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