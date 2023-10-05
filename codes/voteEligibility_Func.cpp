#include<iostream>
using namespace std;
void vote(int n)
{
    (n>=18)?cout<<" you are eligible to vote\n":cout<<" you are not eligible to vote\n";
}
int main()
{
    int age;
    cout<<" enter your age to check vote eligibility\n";
    cin>>age;
    vote(age);
    return 0;
}