#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	vector<int> parent, rank;
    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        
        vector<vector<int>> res;
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<adj[i].size(); j++)
            {
                vector<int> x = adj[i][j];
                temp.push_back(x[1]);
                temp.push_back(min(i,x[0]));
                temp.push_back(max(i,x[0]));
                res.push_back(temp);
                temp.clear();
            }
        }
        sort(res.begin(), res.end());            
        vector<vector<int>> graph;
        for(int i=0; i<res.size(); i+=2)
            graph.push_back(res[i]);
        int cost = 0;
        parent.resize(V);
        rank.resize(V,1);
        for (int i=0; i<V; i++)
            parent[i]=i;
        
        for (vector<int> e : graph)
        {
            int a = find_set(e[1]); 
            int b = find_set(e[2]); 
            if (a!=b) {
                cost += e[0];
                if(rank[a]<rank[b]) swap(a,b);
                if(rank[a]==rank[b]) rank[a]++;
                parent[b]=a;
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