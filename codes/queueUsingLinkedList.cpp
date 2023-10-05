#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node* next;
        int data;
        Node(int val){
            data = val;
            next = NULL;
        }
};
class Queue{
    Node *front , *back;
    public:
    Queue(){
        front = NULL;
        back = NULL;
    }
    void enqueue(int x) {
        Node *n = new Node(x);
        if(front==NULL) {
            front = n;
            back = n;
            return;
        }
        back -> next = n;
        back = n;
    }
    bool empty() {
        return front==NULL;
    }
    int peek() {
        if(!empty()) {
            return front->data;
        }
        cout<<"Queue underflow\n";
        return -1;
    }
    void dequeue(){
        if(!empty()) {
            Node *todelete = front;
            front = front->next;
            delete todelete;
            return;
        }
        cout<<"Queue underflow\n";
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty();
    return 0;
}