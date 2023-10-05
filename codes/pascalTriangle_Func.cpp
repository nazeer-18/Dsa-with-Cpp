#include<iostream>
using namespace std;
int fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    if(num>=0)
        return fact;
}
int ncr(int n,int r)
{
    if(n>=r && r>=0)
        return fact(n)/(fact(n-r)*fact(r));
}

int main()
{
    int n;
    cout<<" enter number of rows you want to print from pascal triangle\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<ncr(i,j)<<" ";
        cout<<endl;
    }
    return 0;
}