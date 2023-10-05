#include <bits/stdc++.h>
#define n 100
using namespace std;
class Queue
{
    int *arr;
    int back, front;

public:
    Queue()
    {
        arr = new int[n];
        back = -1;
        front = -1;
    }
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue is filled\n";
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
            front++;
    }
    bool empty()
    {
        if (front == -1 || front > back) {
            front = -1;
            back = -1;
            return true;
        }
        return false;
    }
    int peek()
    {
        if (!empty())
        {
            return arr[front];
        }
        return -1;
    }
    void dequeue()
    {
        if (!empty())
        {
            front++;
            return;
        }
        cout << "Queue is empty\n";
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    return 0;
}