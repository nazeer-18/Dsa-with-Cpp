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
    int mx = *max_element(v.begin(),v.end());
    vector<int> count(mx+1,0);
    loop(i,n)  count[v[i]]++;
    vector<int> sorted(n,0);
    partial_sum(count.begin(),count.end(),count.begin());
    for(int i = n-1; i >= 0; i--)
        sorted[--count[v[i]]] = v[i];
    for(auto ele:sorted)
        cout<<ele<<" ";
    return 0;
}