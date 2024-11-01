#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int find_set(int v, vector<int> &parent)
{
    if (v != parent[v])
        v = find_set(parent[v], parent);
    return v;
}
void unionn(int x, int y, vector<int> &parent, vector<int> &rank)
{
    x = find_set(x, parent);
    y = find_set(y, parent);
    if (rank[x] < rank[y])
        swap(x, y);
    parent[y] = x;
    rank[x] += rank[y];
}
int detectCycle(int V, vector<int> adj[])
{
    vector<int> parent(V);
    vector<int> rank(V, 0);
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
        rank[i] = 1;
    }
    map<pair<int, int>, int> mp;
    for (int u = 0; u < V; u++)
    {
        for (auto v : adj[u])
        {
            if (mp.find({u, v}) != mp.end() or mp.find({v, u}) != mp.end())
                continue;
            mp[{v, u}] = 1;
            int x = find_set(u, parent);
            int y = find_set(v, parent);
            if (x == y)
            {
                return 1;
            }
            unionn(u, v, parent, rank);
        }
    }
    return 0;
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
    if (detectCycle(v, adj))
        cout << "Cycle is present";
    else
        cout << "Cycle is not present";
    return 0;
}