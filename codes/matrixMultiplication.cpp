#include<iostream>
using namespace std;
int  main()
{
    int r1,c1,c2;
    cin>>r1>>c1>>c2;
    int a[r1][c1],b[c1][c2];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < c1; i++) {
        for(int j = 0; j < c2; j++) {
            cin>>b[i][j];
        }
    }
    int d[r1][c2];
    for(int i = 0; i < r1;i++)
        for(int j = 0; j < c2; j++)
            d[i][j]=0;
    for(int i = 0;i < r1;i++) {
        for(int j = 0; j < c2;j++) {
            for(int k = 0; k < c1;k++) {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0;i < r1;i++) {
        for(int j = 0; j < c2; j++) 
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}