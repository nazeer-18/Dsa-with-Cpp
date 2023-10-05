#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" enter any number to check prime or not \n";
    cin>>num;
    int i=2;
    for(i;i<num;i++)
        {
            if(num%i==0)
                {
                    cout<<num<<" is not a prime number \n";
                    break;
                }
        }
    if(num==i)
        {
            cout<<num<<" is a prime number \n";
        }
    return 0;
}