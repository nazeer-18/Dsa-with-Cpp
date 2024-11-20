#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,n) for(int i = a; i < n; i++)
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a) sort(a,a+a.size())
#define vi(v,n) vector<int> v(n,0)
#define inp(v) for(auto &it:v) cin>>it
using namespace std;
void testCases(){
    int n;
    const int N = 1e5;
    cin>>n;
    vector<int>dp(n+1,N);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            dp[i]=min(dp[i],1+dp[i-j*j]);
        }
    }
    cout<< dp[n];
}
int main()
{
    int T=1;
    cin>>T;
    while(T--){
        testCases();
    }
    return 0;
}