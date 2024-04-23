#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int findPeak(int a[], int l, int h, int n)
{
    int m = l + (h - l) / 2;
    if ((m == 0 || a[m] >= a[m - 1]) && (m == n - 1 || a[m] >= a[m + 1]))
        return m;
    else if (m > 0 && a[m] < a[m - 1])
    {
        return findPeak(a, l, m - 1, n);
    }
    else
    {
        return findPeak(a, m + 1, h, n);
    }
}
int main()
{
    int a[] = {10, 2, 5, 8, 9, 10, 19, 11};
    cout << findPeak(a, 0, sizeof(a) / 4 - 1, sizeof(a) / 4) << endl;
    return 0;
}