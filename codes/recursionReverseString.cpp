#include<iostream>
#include<string.h>
using namespace std;
void reverse(string s){
    if(s.length()==0)
        return;
    reverse(s.substr(1));
    cout<<s.at(0);
}
int main() {
    string n;
    cin>>n;
    reverse(n);
}