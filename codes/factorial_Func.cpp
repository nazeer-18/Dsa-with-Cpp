#include<iostream>
using namespace std;
void fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    (num>=0)?cout<<" factorial of "<<num<<" is : "<<fact:cout<<" enter valid number\n";
}
int main()
{
    int n;
    cout<<" enter any number to find it's factorial\n";
    cin>>n;
    fact(n);
    return 0;
}
