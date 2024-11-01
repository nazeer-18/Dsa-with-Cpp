#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
void testcases()
{
    int n;
    cin >> n;
    int l, p,d,f;
    vector<pair<int, int>> v;
    loop(i, n)
    {
        cin>>d>>f;
        v.push_back({ d, f});
    }
    cin >> l >> p;
    for(int i=0;i<n;i++){
        v[i].first = l - v[i].first;
    }
    sort(v.begin(), v.end());
    priority_queue<int> pq;
    int ans = 0, i = 0, dtt = 0;
    while (l > 0)
    {
        dtt++;
        l--;
        p--;
        if (v[i].first <= dtt)
        {
            pq.push(v[i].second);
            i++;
        }
        if (p <= 0)
        {
            if (pq.empty())
            {
                cout << -1;
                return ;
            }
            if(l==0){
                cout<<ans<<endl;
                return;
            }
            p += pq.top();
            pq.pop();
            ans++;
        }
        //cout<<dtt<<" "<<l<<" "<<p<<" "<<ans<<endl;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcases();
    }
    return 0;
}