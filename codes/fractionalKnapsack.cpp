#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
double fractionalKnapsack(int n,int w,vector<int>val,vector<int>wt){
    vector<pair<int,int>>vp;
    loop(i,n){
        vp.push_back({val[i],wt[i]});
    }
    sort(vp.begin(),vp.end(),[&](pair<int,int>&a,pair<int,int>&b){return (double)a.first/a.second>(double)b.first/b.second;});
    double ans=0;
    loop(i,n){
        if(vp[i].second<=w){
            ans+=vp[i].first;
            w-=vp[i].second;
        }
        else{
            ans+=(double)vp[i].first/vp[i].second*w;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>val,wt;
    loop(i,n){
        int x;
        cin>>x;
        val.push_back(x);
    }
    loop(i,n){
        int x;
        cin>>x;
        wt.push_back(x);
    }
    int w;
    cin>>w;
    cout<<fractionalKnapsack(n,w,val,wt);
    return 0;
}