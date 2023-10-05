#include<iostream>
using namespace std;
int sum(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    sum+=i;
    return sum;
}
int main()
{
    int n;
    cout<<" enter any number to find sum of natural numbers till it\n";
    cin>>n;
    cout<<" sum of natural numbers till "<<n<<" is : "<<sum(n);
    return 0;
}