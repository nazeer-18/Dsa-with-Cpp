#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int> v;
    loop(i,n) {
        cin>>k;
        v.push_back(k);
    }
    for(int i = 1; i <= n-1; i+=2) {
        if(v[i]>v[i-1])
            swap(v[i],v[i-1]);
        if(i<=n-2 && v[i]>v[i+1])
            swap(v[i],v[i+1]);
    }
    loop(i,n) cout<<v[i]<<" ";
    return 0;
}