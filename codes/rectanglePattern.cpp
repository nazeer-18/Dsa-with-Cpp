#include<iostream>
using namespace std;
int main()
{   
    int rows,columns;
    cout<<" enter number of rows \n";
    cin>>rows;
    cout<<" enter number of columns \n";
    cin>>columns;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        cout<<" * ";
        cout<<"\n";
    }
    
    return 0;
}