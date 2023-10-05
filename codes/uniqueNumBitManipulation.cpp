#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int xorSum = 0;
    for (i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }
    cout << xorSum << endl;
}