#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<" enter value of n\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<" enter array elements\n";
        cin>>a[i];
    }
    const int m=1e5;
    int idx[m];
    for(int i=0;i<m;i++)
        idx[i]=-1;
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]==-1)
            idx[a[i]]=i;
        else    
            minidx=min(idx[a[i]],minidx);
    }
    (minidx!=INT_MAX)?cout<<minidx+1:cout<<" no repeating element \n";
    return 0;
}