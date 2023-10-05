#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<" enter the two numbers to compare \n";
    cin>>x>>y;
    if(x>y)
            cout<<x<<" is greater than "<<y<<endl;
    else if(x==y)
            cout<<x<<" is equal to "<<y<<endl;
        else
            cout<<x<<" is less than "<<y<<endl;
    
        return 0;
}