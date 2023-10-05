#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
    (x>y && x>z)?cout<<x:(y>x && y>z)?cout<<y:cout<<z;
}
int min(int x,int y,int z)
{
    (x<y && x<z)?cout<<x:(y<x && y<z)?cout<<y:cout<<z;
}
int main()
{
    int a,b,c;
    cout<<" enter any 3 numbers to find their maximum & minimumn\n";
    cin>>a>>b>>c;
    cout<<" maximum is :";
    max(a,b,c);
    cout<<endl;
    cout<<"minimum is :";
    min(a,b,c);
    return 0;
}