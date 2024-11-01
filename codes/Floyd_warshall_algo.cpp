#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void shortestDistance(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (matrix[j][i] != -1 && matrix[i][k] != -1)
                    {
                        if (matrix[j][k] != -1)
                            matrix[j][k] = min(matrix[j][k], matrix[j][i] + matrix[i][k]);
                        else
                            matrix[j][k] = matrix[j][i] + matrix[i][k];
                    }
                }
            }
        }
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        obj.shortestDistance(matrix);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}