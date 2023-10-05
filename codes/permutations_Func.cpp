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
int main()
{
    int n,r;
    cout<<" enter value of n \n";
    cin>>n;
    cout<<" enter value of r \n";
    cin>>r;
    (n>=r && r>=0)?cout<<" value of "<<n<<"c"<<r<<" is : "<<(fact(n))/(fact(n-r)*fact(r)):cout<<" invalid input ";
    return 0;
}