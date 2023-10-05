#include<iostream>
using namespace std;
void desc(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    desc(n-1);
}
void inc(int n)
{
    if(n==0)
        return;
    inc(n-1);
        cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    desc(n);
    cout<<endl;
    inc(n);
    return 0;
}