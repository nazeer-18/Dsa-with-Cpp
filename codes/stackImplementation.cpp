#include<bits/stdc++.h>
#define n 100
using namespace std;
class Stack{
    int* arr;
    //dynamically allocating memory for stack
    int top;
    public:
        Stack() {
            arr = new int[n];
            top=-1;
        }
        void push(int val) {
            if(top==n-1) {
                cout<<"stack overflow"<<endl;
                return;
            }
            top++;
            arr[top]=val;
        }
        bool empty() {
            return top==-1;
        }
        void pop() {
            if(empty()) {
                cout<<"stack underflow"<<endl;
                return;
            }
            else top--;
        }
        int Top(){
            if(empty()) {
                cout<<"stack underflow"<<endl;
                return -1;
            }
            return arr[top]; 
        }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;;
    st.pop();
    cout<<st.Top()<<endl;;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}
