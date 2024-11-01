#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
bool cycle(vector<int> adj[], vector<bool> &vis, vector<bool> st, int src)
{
    st[src] = true;
    if (!vis[src])
    {
        vis[src] = true;
        for (auto it : adj[src])
        {
            if (!vis[it] && cycle(adj, vis, st, it))
                if (st[it])
                    return true;
        }
    }
    st[src] = false;
    return false;
}
bool isCycle(int v, vector<int> adj[])
{
    vector<bool> vis(v, false);
    vector<bool> st(v, false);
    for (int i = 0; i < v; i++)
    {
        if (!vis[i] && cycle(adj, vis, st, i))
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
    }
    if (isCycle(v, adj))
        cout << "Cycle is present";
    else
        cout << "Cycle is not present";
    return 0;
}