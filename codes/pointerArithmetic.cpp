#include<iostream>
using namespace std;
int main()
{
    int a= 10; 
    int *b = &a;
    cout<<sizeof(int)<<" <- size of int size of pt ->  "<<sizeof(b)<<endl;
    cout<<" "<<b<<" "<<&b<<endl;
    --b;
    cout<<b<<endl;
}