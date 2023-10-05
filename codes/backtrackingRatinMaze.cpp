#include <iostream>
using namespace std;
bool isSafe(int **a, int x, int y, int n)
{
    if (a[x][y] == 1 && x < n && y < n)
        return true;
    return false;
}
bool ratMaze(int **a, int x, int y, int n, int **sol)
{
    if (isSafe(a, x, y, n))
    {
        sol[x][y] = 1;
        if (x == n - 1 && y == n - 1)
            return true;
        if (ratMaze(a, x + 1, y, n, sol))
            return true;
        if (ratMaze(a, x, y + 1, n, sol))
            return true;
        sol[x][y] = 0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    int **sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        sol[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            sol[i][j] = 0;
        }
    }
    if (ratMaze(a, 0, 0, n, sol))
    {
        cout << "Reached successfully and the path is : \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << sol[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "Not reachable -1 \n";
}