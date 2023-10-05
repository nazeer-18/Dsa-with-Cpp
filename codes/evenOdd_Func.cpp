#include<iostream>
using namespace std;
int test(int num)
   { (num%2)?cout<<"odd":cout<<"even"; }  //nothing mentioned so it takes true ie not zero
int main()
{
    int n;
    cout<<" enter number to check if it's even or odd \n";
    cin>>n;
    test(n);
    return 0;
}