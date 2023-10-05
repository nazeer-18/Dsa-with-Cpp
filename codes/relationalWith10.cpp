#include<iostream>
using namespace std;
int main()
    {
        int num;
        cout<<" enter number to check its relation with 10 \n";
        cin>>num;
        if(num>10)
            cout<<num<<" is greater than 10 ";
        else if(num==10)
            cout<<num<<" is equal to 10 ";
        else
            cout<<num<<" is less than 10 ";
        return 0;
    }