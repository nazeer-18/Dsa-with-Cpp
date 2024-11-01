#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
bool cycle(vector<int> adj[], int v, vector<bool> &vis, int parent, int src)
{
    vis[src] = true;
    for (auto it : adj[src])
    {
        if (it != parent)
        {
            if (vis[it])
                return true;
            vis[it] = true;
            if (cycle(adj, v, vis, src, it))
                return true;
        }
    }
    return false;
}
bool isCycle(int v, vector<int> adj[])
{
    vector<bool> vis(v, false);
    for (int i = 0; i < v; i++)
    {
        if (!vis[i] && cycle(adj, v, vis, -1, i))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    loop(i, e)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if (isCycle(v, adj))
        cout << "Cycle is present";
    else
        cout << "Cycle is not present";
    return 0;
}