#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows \n";
    cin>>rows;
    cout<<"\n";
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<i<<" ";

    cout<<"\n";
    }
    return 0;

}