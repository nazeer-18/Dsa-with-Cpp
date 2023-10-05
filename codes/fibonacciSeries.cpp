#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" how many terms you want to print from fibonacci series \n";
    cin>>n;
    int low=0,high=1;
    for(int i=1;i<=n;i++)
    {
        cout<<low<<" ";
        high+=low;
        low=high-low;
    }
    return 0;
}