#include<bits/stdc++.h>
using namespace std;
int convert(int num)
{
    int ans=0,x=1;
    while (n)
    {
        ans+=(n%2)*x;
        x*=10;
        n/=2;
    }
    cout<< ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<convert(n)<<endl;
    }
    return 0;
}