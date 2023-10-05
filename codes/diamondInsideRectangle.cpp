#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows/2 \n";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=i;j<=rows;j++)
        cout<<"*";
        for(int k=1;k<=2*i-3;k++)
        cout<<" ";
        for(int j=i;j<=rows;j++)
        {
            if(j==1)
                 continue;
            else
                 cout<<"*";
        }
        cout<<endl;
    }
    for(int i=rows;i>=1;i--)
    {
        for(int j=i;j<=rows;j++)
        cout<<"*";
        for(int k=1;k<=2*i-3;k++)
        cout<<" ";
        for(int j=i;j<=rows;j++)
        {
            if(j==1)
                continue; 
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}