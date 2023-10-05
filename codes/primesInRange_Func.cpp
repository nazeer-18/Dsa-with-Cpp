#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0)
            return 0;    //false
    if(num<2)
        return 0;   //to skip non positive numbers and 1 false
    return 1;           //true
}
int main()
{
    int low,high;
    cout<<" enter lower limit of range\n";
    cin>>low;
    cout<<" enter higher limit of range\n";
    cin>>high;
    cout<<" primes in between "<<low<<" and "<<high<<" are :\t";
    for(low;low<=high;low++)
        if(isPrime(low))
            cout<<low<<" ";
    return 0;       
}