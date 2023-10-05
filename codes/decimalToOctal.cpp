#include<iostream>
using namespace std;
int convert(int num)
{
    int ans=0,x=1;
    while(num)
    {
        ans+=(num%8)*x;
        x*=10;
        num/=8;
    }
    cout<<" it's octal form is : "<<ans;
}
int main()
{
    int n;
    cout<<" enter any number to convert into octal form \n";
    cin>>n;
    convert(n);
    return 0;

}