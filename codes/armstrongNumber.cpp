#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rem;
    cout<<" enter number to check if its armstrong or not \n";
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(temp==sum)
        cout<<" armstrong number \n";
    else
        cout<<" not an armstrong number \n";
    return 0;
}