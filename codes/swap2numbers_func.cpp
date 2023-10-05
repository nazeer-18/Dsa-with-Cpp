#include<iostream>
using namespace std;
int swap(int a,int b)
{
    a=a+b;
    b=a-b;  //a+b-b=a
    a=a-b;  //(a+b)-(a)=b
    cout<<" numbers after performing swaping are : \n"<<a<<endl<<b;
}
int main()
{
    int x,y;
    cout<<" enter any two numbers \n";
    cin>>x>>y;
    swap(x,y);
    return 0;
}