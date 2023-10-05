#include<iostream>
using namespace std;
int dec(int n)
{
    int rev=0,x=1;
    while(n)
    {
        rev+=(n%10)*x;
        x*=2;
        n/=10;
    }
    cout<<"it's decimal value is : "<<rev<<endl;
}
bool check(int num)
{
    while(num)
    {
        int rev=num%10;
        num/=10;
        if(rev && rev!=1)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<" enter binary number to convert it into decimal form\n";
    cin>>n;
    if(check(n))
        dec(n);
    else
        cout<<" entered number is not in binary format\n";
    return 0;
}