#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int search(int a[], int l, int h, int key)
{
    int m, n = h + 1;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (m == 0 || a[m] < a[m - 1])
        {
            break;
        }
        else if (a[m] > a[0])
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    if (m == 0 && m != n - 1)
        m++;
    if (key <= a[n - 1])
    {
        // right
        l = m;
        h = n - 1;
    }
    else
    {
        h = m;
        l = 0;
    }
    while (l <= h)
    {
        m = l + (h - l) / 2;
        // cout<<l<<" "<<h<<" "<<m<<" "<<a[m]<<endl;
        if (a[m] == key)
            return m;
        else if (a[m] < key)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
}
int main()
{
    int a[]={5,6,7,8,9,10,1,2,3};
    int key = 10;
    cout<<(search(a,0,sizeof(a)/4-1,key))<<endl;
    return 0;
}