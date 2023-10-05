#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
            return false;
    }
    // left top diagonal
    for (int row = x - 1, col = y - 1; row >= 0 && col >= 0; row--, col--)
    {
        if (arr[row][col] == 1)
            return false;
    }
    // Right top diagonal
    for (int row = x - 1, col = y + 1; row >= 0 && col < n; row--, col++)
    {
        if (arr[row][col] == 1)
            return false;
    }
    return true;
}
bool NQueen(int **a, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int y = 0; y < n; y++)
    {
        if (isSafe(a, x, y, n))
        {
            a[x][y] = 1;
            if (NQueen(a, x + 1, n))
            {
                return true;
            }
            a[x][y] = 0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    }
    bool ans = NQueen(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}