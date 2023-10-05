#include<iostream>
using namespace std;
int test(int n)
{
    ((n>=65 && n<=90)||(n>=97 && n<=122))?cout<<" it's a alphabet\n":cout<<" not a alphabet\n";
}
int main()
{
    char ch;
    cout<<" enter any character to check if it's alphabet or not\n";
    cin>>ch;
    test(ch);
    return 0;
}