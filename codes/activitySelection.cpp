#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int activitySelection(vector<int>s,vector<int>e,int n){
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        vp.push_back({e[i],s[i]});
    }
    sort(vp.begin(),vp.end());
    int i=0,cnt=0,ns=0;
    while(i<n){
        if(vp[i].second>ns){
            cnt++;
            ns=vp[i].first;
        }
        i++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<int>s,e;
    loop(i,n){
        int x;
        cin>>x;
        s.push_back(x);
    }
    loop(i,n){
        int x;
        cin>>x;
        e.push_back(x);
    }
    cout<<activitySelection(s,e,n);
    return 0;
}