#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uglyNumber(int n)
    {
        int a = 0, b = 0, c = 0, i = 1, f, s, t, mini;
        vector<int> v = {1};
        while (i < n)
        {
            f = v[a] * 2;
            s = v[b] * 3;
            t = v[c] * 5;
            mini = min(min(f, s), t);
            if (mini == f)
                a++;
            if (mini == s)
                b++;
            if (mini == t)
                c++;
            v.push_back(mini);
            i++;
        }
        return v[n - 1];
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        int res;
        res = ob.uglyNumber(n);

        cout << res;
        cout << "\n";

        cout << "~" << "\n";
    }
}