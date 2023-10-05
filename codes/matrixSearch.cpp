#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    bool flag =false;
    cin>>key;
    int row = 0, col = n-1;
    while(row<=m-1 && col>=0) {
        if(key == a[row][col])
        {
            flag =true;
            cout<<row+1<<" "<<col+1<<endl;
            break;
        }
        else if(key < a[row][col]) col--;
        else row++;
    }
    if(flag) cout<<"element found"<<endl;
    else cout<<"element not found"<<endl;
    return 0;
}