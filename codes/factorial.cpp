#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter any number to find its factorial \n";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    cout<<" factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}