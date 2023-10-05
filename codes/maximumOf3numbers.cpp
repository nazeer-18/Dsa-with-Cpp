#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<" enter any three values to find the maximum \n";
    cin>>a>>b>>c;
    if(a>b )
        if(a>c)
            cout<<a<<" is maximum of three numbers \n";
        else
            cout<<c<<" is maximum of three numbers \n";
    else
        if(b>c)
            cout<<b<<" is maximum of three numbers \n";
        else
            cout<<c<<" is maximum of three numbers \n";

     return 0;
            
            }