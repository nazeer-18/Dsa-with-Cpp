#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number \n";
    cin>>n;
    while(n!=0)
    {
        cout<<n%10<<endl;
        n/=10;
    }
    return 0;
}