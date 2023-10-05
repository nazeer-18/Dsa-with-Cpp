#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (a[j] == j)
                {
                    a[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << a[n] << " ";
        n /= a[n];
    }
    cout << endl;
    return 0;
}