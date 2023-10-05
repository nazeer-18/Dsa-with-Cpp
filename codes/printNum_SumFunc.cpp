#include<iostream>
using namespace std;
int print(int num)
{
    cout<<" number is: "<<num<<endl;
}
int add(int num1,int num2)
{
    print(num1);
    print(num2);
    return(num1+num2);
}
int main()
{
    int a,b;
    cout<<"enter values of a and b\n";
    cin>>a>>b;
    cout<<" their sum is : "<<add(a,b);
    return 0;
}