#include<iostream>
using namespace std;
void fibonacci(int num)
{
    int low=0,high=1;
    for(int i=1;i<=num;i++)
    {   
        cout<<low<<" ";
        high=high+low;
        low=high-low;
    }
}
int main()
{
    int n;
    cout<<" how many terms youwant to print from fibonacci series\n";
    cin>>n;
        fibonacci(n);
    return 0;
}