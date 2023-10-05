#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<" enter number to check if its prime or not \n";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
          break;
    }
    if(n==i)
        cout<<" prime number \n";
    else
        cout<<" not a prime number \n";
    return 0;
}