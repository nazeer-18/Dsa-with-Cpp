#include<iostream>
using namespace std;
 int main(){

     int num;
     cout<<" enter a natural number n  to print numbers from 1 to n \n";
     cin>>num;
     cout<<" first "<<num<<" natural numbers are :";
     for(int i=1;i<=num;i++)
        cout<<i<<" ";

     return 0;
            }