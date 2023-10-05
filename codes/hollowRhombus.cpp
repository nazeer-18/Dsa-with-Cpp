#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows \n";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=i;j<rows;j++)
        cout<<" ";
        for(int k=1;k<=rows;k++)
        {
            if(k==1 || k==rows || i==1 || i==rows)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}