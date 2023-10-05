#include<iostream>
using namespace std;
int main(){

    int num,sum=0;
    cout<<" enter any number to find sum till n \n";
    cin>>num;
    for(int i=1;i<=num;i++)
         sum=sum+i;
    cout<<" sum of first "<<num<<" natural numbers is :"<<sum<<endl;

    return 0;
}