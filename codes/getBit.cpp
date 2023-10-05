#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter number\n";
    cin>>n;
    int pos;
    cout<<"enter position\n";
    cin>>pos;
    int bitMask = 1 <<pos;
    int ans = n & bitMask;
    cout<<"Bit is "<<((ans==0)?0:1);
}