#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<" enter age for checking vote eligibility \n ";
    cin>>age;
    if(age>=18)
        cout<<" you are eligible to vote \n";
    else 
        cout<<" you are not eligible for vote \n";

    return 0;
}