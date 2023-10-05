#include<iostream>
using namespace std;
int main()
{
    int a=1,b=3,c;
    c=b<<a;
    b=c*(b*(++a)--);
    a=a>>b;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}