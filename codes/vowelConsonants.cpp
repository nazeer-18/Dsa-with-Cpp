#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<" enter any alphabet to know if its even or consonant \n";
    cin>>ch;
    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
        cout<<ch<<" is a vowel \n";
    else
        cout<<ch<<" is a consonant \n";

    return 0;
            }