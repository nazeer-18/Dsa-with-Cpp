#include<iostream>
using namespace std;
int main(){

    float a,b,c;
    cout<<" enter length of sides of the trianle one after another \n";
    cin>>a>>b>>c;
    if(a==b && b==c)
        cout<<" its an equilateral triangle \n";
    else if(a==b || b==c)
            cout<<" its an isosceles triangle \n";
        else
            cout<<" its an scalene triangle \n";
    return 0;
            }