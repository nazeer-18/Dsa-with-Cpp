#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
bool isBipartite(int n, vector<int> adj[])
{
    // Code here
    vector<int> v(n, -1);
    queue<int> st;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            v[i] = 0;
            for (auto it : adj[i])
            {
                if (v[it] == -1)
                    st.push(it);
                else if (v[it] == 0)
                    return false;
                v[it] = 1;
            }
        }
        while (!st.empty())
        {
            int top = st.front();
            st.pop();
            for (auto it : adj[top])
            {
                if (v[it] == -1)
                    st.push(it);
                else if (v[it] == v[top])
                    return false;
                v[it] = 1 ^ v[top];
            }
        }
    }
    return true;
}
int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<isBipartite(V,adj)<<endl;
    return 0;
}