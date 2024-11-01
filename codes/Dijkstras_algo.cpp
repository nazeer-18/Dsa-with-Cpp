#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        int V=adj.size();
        const int inf=1e9;
        vector<int>dist(V,inf);
        dist[src]=0;
        set<vector<int>>st;
        st.insert({0,src});
        while(!st.empty()){
            vector<int> edge=*(st.begin());
            st.erase(st.begin());
            int u=edge[1],w=edge[0];
            for(auto it:adj[u]){
                int wt=it.second;
                int v=it.first;
                if(dist[v]>w+wt){
                    st.erase({wt,v});
                    st.insert({w+wt,v});
                    dist[v]=wt+w;
                }
            }
        }
        return dist;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();
        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);
        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}