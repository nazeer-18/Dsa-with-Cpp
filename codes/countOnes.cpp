#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    while(n)
    {
        cnt++;
        n = n & n -1;
    }
    cout<<cnt;
}