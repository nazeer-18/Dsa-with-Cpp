#include "bits/stdc++.h"
using namespace std;
int countPaths(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return 1;
    if (i > n - 1 || j > n - 1)
        return 0;
    return  countPaths(n, i + 1, j) + countPaths(n, i, j + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << countPaths(n, 0, 0);
    return 0;
}