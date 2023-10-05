#include<bits/stdc++.h>
using namespace std;
int getCount(int n)
{
    if(n==0 || n==1 || n==2)
        return n;
    return getCount(n-2)*(n-1) + getCount(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<getCount(n)<<endl;
}
