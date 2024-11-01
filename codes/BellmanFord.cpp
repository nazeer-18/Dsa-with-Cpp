#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        const int inf = 1e8;
        vector<int> dist(V, inf);
        dist[src] = 0;
        bool cycle = false;
        for (int i = 0; i < V - 1; i++)
        {
            for (auto e : edges)
            {
                int u = e[0], v = e[1], w = e[2];
                if (dist[u] != inf && dist[v] > dist[u] + w)
                    dist[v] = dist[u] + w;
            }
        }
        for (auto e : edges)
        {
            int u = e[0], v = e[1], w = e[2];
            if (dist[u] != inf && dist[v] > dist[u] + w)
                return {-1};
        }
        return dist;
    }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> edge(3);
            edge[0] = u;
            edge[1] = v;
            edge[2] = w;
            edges.push_back(edge);
        }
        int src;
        cin >> src;
        cin.ignore();
        Solution obj;
        vector<int> res = obj.bellmanFord(N, edges, src);
        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
    return 0;
}
