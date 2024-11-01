#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int expedi(int n, int l, int p, vector<pair<int, int>> v)
{
    loop(i, n)
    {
        v[i].first = l - v[i].first;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (p >= l)
        {
            break;
        }
        while (p < v[i].first)
        {
            if (pq.empty())
            {
                return -1;
            }
            ans++;
            p += pq.top();
            pq.pop();
        }
        pq.push(v[i].second);
    }
    while (p < l)
    {
        if (pq.empty())
        {
            return -1;
        }
        ans++;
        p += pq.top();
        pq.pop();
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int l, p, d, f;
    vector<pair<int, int>> v;
    loop(i, n)
    {
        cin >> d >> f;
        v.push_back({d, f});
    }
    cin >> l >> p;
    cout<<expedi(n, l, p, v);
    return 0;
}