#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter any number to find its reverse \n";
    cin>>n;
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<rev;
    return 0;
}