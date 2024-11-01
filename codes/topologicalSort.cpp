#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
vector<int> topoSort(int v,vector<int> adj[]){
    vector<int> ans,indegree(v,0);
    for(int i = 0; i < v; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int t = q.front();
        q.pop();
        ans.push_back(t);
        for(auto it: adj[t]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
    return ans;
}
int main()
{
    int v,e;
    cin >> v >> e;
    vector<int> adj[v];
    for(int i = 0; i < e; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    vector<int> ans = topoSort(v,adj);
    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}