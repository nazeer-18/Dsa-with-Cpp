#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int helper(int a[], int i, int n, vector<vector<int>> &dp)
    {
        if (i == n)
            return 0;
        if (dp[i][n] != INT_MAX)
            return dp[i][n];
        if (i + 1 == n)
        {
            return dp[i][n] = a[i] * a[n] * a[n + 1];
        }
        for (int k = i; k < n; k++)
        {
            dp[i][n] = min(dp[i][n], a[i] * a[k + 1] * a[n + 1] + helper(a, i, k, dp) + helper(a, k + 1, n, dp));
        }
        return dp[i][n];
    }
    int matrixMultiplication(int n, int a[])
    {
        if (n == 2)
            return 0;
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        return helper(a, 0, n - 2, dp);
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.matrixMultiplication(N, arr) << endl;

        cout << "~" << "\n";
    }
    return 0;
}