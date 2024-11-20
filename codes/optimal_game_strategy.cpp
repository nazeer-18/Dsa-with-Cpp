#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long helper(int a[], int i, int j, vector<vector<long long>> &dp)
    {
        if (i > j)
            return 0;
        if (dp[i][j] != 0)
            return dp[i][j];
        int c1 = a[i] + min(helper(a, i + 1, j - 1, dp), helper(a, i + 2, j, dp));
        int c2 = a[j] + min(helper(a, i + 1, j - 1, dp), helper(a, i, j - 2, dp));
        return dp[i][j] = max(c1, c2);
    }
    long long maximumAmount(int n, int a[])
    {
        vector<vector<long long>> dp(n, vector<long long>(n, 0));
        return helper(a, 0, n - 1, dp);
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.maximumAmount(n, a) << endl;
        cout << "~" << "\n";
    }
    return 0;
}