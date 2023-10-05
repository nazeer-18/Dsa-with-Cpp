#include<iostream>
using namespace std;
int main()
{
    int n,pos,val;
    cin>>n>>pos>>val;
    int cb = n & (~(1<<pos));
    n = cb;
    cout<<(n | (val << pos));
}