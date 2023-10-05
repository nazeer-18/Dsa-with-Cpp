#include<iostream>
using namespace std;
int main()
    {
        char op;
        int num1,num2;
        cout<<" enter any two numbers \n";
        cin>>num1>>num2;
        cout<<" enter the operator \n";
        cin>>op;
        switch(op)
        {
            case '+':
            cout<<" sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2;
            break;
            case '-':
            cout<<" difference of "<<num1<<" and "<<num2<<" is : ";
            (num1>=num2)?cout<<num1-num2:cout<<num2-num1;
            break;
            case '*':
            cout<<" multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2;
            break;
            case '/':
            (num2!=0)?cout<<" division of "<<num1<<" and "<<num2<<" is : "<<num1/num2:cout<<" cant divide a number with zero ";
            break;
            default :
            cout<<" invalid operator  : ";
            break;
        }
        return 0;
    }