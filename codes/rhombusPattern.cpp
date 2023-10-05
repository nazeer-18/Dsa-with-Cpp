#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows \n";//for rombus put n=5
    cin>>rows;
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        cout<<" ";
        for(int k=1;k<=rows;k++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}