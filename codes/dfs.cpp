#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> vis(n+1,0);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    stack<int> s;
    s.push(1);
    vis[1]=1;
    while(!s.empty()){
        int node = s.top();
        s.pop();
        cout<<node<<" ";
        for(auto it: adj[node]){
            if(!vis[it]){
                s.push(it);
                vis[it]=1;
            }
        }
    }
    return 0;
}