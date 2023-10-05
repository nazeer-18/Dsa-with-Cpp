#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cout<<" enter any two numbers to compare \n";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<num1<<" is maximum \n"<<num2<<" is minimum \n";
    else if(num1==num2)
            cout<<num1<<" is equal to "<<num2<<endl;
        else 
            cout<<num2<<" is maximum \n"<<num1<<" is minimum \n";

        return 0;
            }