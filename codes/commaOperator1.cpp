#include<iostream>
using namespace std;
int main()
{
    int a=5;
    a=1,2,3;   //priority is given from left to right
    cout<<a<<endl;
    return 0;
}