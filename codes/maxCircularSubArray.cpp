#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], currSum = 0, maxSum = 0, first = 0, last = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
            first = i;
        }
        if (currSum >= maxSum)
        {
            maxSum = currSum;
            last = i;
        }
    }
    cout << maxSum;
    return 0;
}