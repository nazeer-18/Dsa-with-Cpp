#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows \n";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {   
        int k=1;
        for(int j=i;j<rows;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i )
                cout<<1<<" ";
            else
            {
                k=k*(i-j+1)/(j-1);
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}




