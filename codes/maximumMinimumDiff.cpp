#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
void max_min_diff(vector<int> v, int n)
{
    sort(v.begin(),v.end());
    int max_diff = 0,min_diff=0;
    for(int i=0;i<n/2;i++){
        max_diff+=v[n-i-1]-v[i];
        min_diff+=v[2*i+1]-v[2*i];
    }
    cout<<max_diff<<" "<<min_diff<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    loop(i,n)
    {
        cin>>v[i];
    }
    max_min_diff(v,n);
    return 0;
}