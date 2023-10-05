#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout << "enter size of array\n";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    cout << " enter sum you need to find \n";
    cin >> sum;
    int start = 0, currSum = a[0];
    for (int i = 1; i < n; i++)
    {
        while (currSum > sum && start < i - 1)
        {
            currSum -= a[start];
            start++;
        }
        if (sum == currSum)
        {
            cout << " Sum found between Indices " << start << " and " << i - 1 << endl;
            sum = -1;
            break;
        }
        currSum += a[i];
    }
    if (sum != -1)
        cout << "No sub array found with given sum  \n";

    return 0;
}
