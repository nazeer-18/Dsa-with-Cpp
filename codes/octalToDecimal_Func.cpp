#include<iostream>
using namespace std;
int convert( int n)
{
    int rev=0,x=1;
    while(n)
    {
        rev+=(n%10)*x;
        x*=8;
        n/=10;
    }
    if(rev>=0)
        cout<<" it's decimal form is : "<< rev;
    else 
        cout<<" entered number is not in octal form\n";
}
int main()
{
    int num;
    cout<<" enter any octal number to convert it into decimal form\n";
    cin>>num;
    convert(num);
    return 0;
}