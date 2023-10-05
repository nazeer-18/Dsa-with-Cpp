#include<bits/stdc++.h>
using namespace std;
int getTiles(int n)
{
    if(n==1 || n==2)
        return n;
    return getTiles(n-1) + getTiles(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<getTiles(n);
    return 0;
}