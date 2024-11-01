#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int numProvinces(vector<vector<int>> adj, int n) {
        int ans=0;
        stack<int>st;
        vector<bool>v(n,false);
        for(int i=0;i<n;i++){
            if(v[i]) continue;
            v[i]=1;
            st.push(v[i]);
            for(int j=0;j<n;j++){
                if(adj[i][j]==1 && !v[j]) {
                    st.push(j);
                    v[j]=true;
                }
            }
            if(!st.empty()) ans++;
            while(!st.empty()){
                int top=st.top();
                st.pop();
                for(int j=0;j<n;j++){
                    if(adj[top][j]==1 && !v[j]) {
                        st.push(j);
                        v[j]=true;
                    }
                }
            }
        }
        return ans;
    }
int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(v,vector<int>(v,0));
    loop(i, e)
    {
        int x, y;
        cin >> x >> y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    cout<<numProvinces(adj,v)<<" j ";
    return 0;
}