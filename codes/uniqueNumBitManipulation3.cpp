#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int ans = 0;
    for(int i  = 0; i < 64; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] & (1<<i))
                sum++;
        }
        if(sum%3!=0)
            ans = ans | (1<<i);
    }
    cout<<ans<<endl;
}