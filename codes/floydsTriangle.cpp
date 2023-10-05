#include<iostream>
using namespace std;
int main()
{
    int rows,k=1;
    cout<<" enter number of rows \n ";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }    
    return 0;
}