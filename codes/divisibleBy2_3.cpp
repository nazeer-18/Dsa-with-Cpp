#include<iostream>
using namespace std;
int main()
    {
        int num;
        cout<<" enter number \n ";
        cin>>num;
        if(num%2==0 && num%3==0)
            cout<<num<<" is divisible by both 2 and 3 \n";
        else if(num%2==0)
            cout<<num<<" is divisible by only  2 \n";
        else if(num%3==0)
            cout<<num<<" is divisible by only  3 \n";
        else 
            cout<<num<<" is not divisible by either 2 or 3 \n";    
        return 0;
    }