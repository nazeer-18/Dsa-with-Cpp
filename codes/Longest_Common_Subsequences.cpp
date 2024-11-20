#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

class Solution
{
public:
    int helper(int n, int m, string &s1, string &s2, vector<vector<int>> &dp)
    {
        if (n <= 0 || m <= 0)
            return 0;
        if (dp[n][m] != -1)
            return dp[n][m];
        if (s1[n - 1] == s2[m - 1])
            dp[n][m] = 1 + helper(n - 1, m - 1, s1, s2, dp);
        else
            dp[n][m] = max(helper(n, m - 1, s1, s2, dp), helper(n - 1, m, s1, s2, dp));
        return dp[n][m];
    }
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return helper(n, m, s1, s2, dp);
    }
};
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
        cout << "~" << "\n";
    }
    return 0;
}