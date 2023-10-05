#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector< pair<int,int> > v;
    loop(i,n) {
        cin>>a[i];
        /*
            pair<int,int> p;
            p.first=a[i];
            p.second=i;
            v.push_back(p);
        */
        v.push_back({a[i],i});
        /* 
            v.push_back(make_pair(a[i],i));
        */
    }
    sort(v.begin(),v.end());  
    loop(i,n) {
        a[v[i].second] = i;
    }
    loop(i,n) cout<<a[i]<<" ";
    cout<<endl;
    // loop(i,n) cout<<v[i].first<<" ";
    // loop(i,n) cout<<v[i].second<<" ";
    return 0;
}