#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,int>>pq;
        pq.push({0,0});
        int cost = 0;
        vector<bool>vis(V,0);
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            int w=-it.first;
            if(vis[node]) continue;
            cost+=w;
            for(auto &edge:adj[node]){
                if(!vis[edge[0]])pq.push({-edge[1],edge[0]});
            }
        }
        return cost;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        Solution obj;
        cout << obj.spanningTree(V, adj) << "\n";
    }
    return 0;
}