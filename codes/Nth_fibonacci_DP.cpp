#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,n) for(int i = a; i < n; i++)
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a) sort(a,a+a.size())
#define vi(v,n) vector<int> v(n,0)
#define inp(v) for(auto &it:v) cin>>it
using namespace std;
const int N = 1e5+2;
ll dp[N];
ll fibo(int n){
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1; 
    if(dp[n]!=-1) return dp[n];
    dp[n] = fibo(n-1)+fibo(n-2);
    return dp[n];
}
void testCases(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}
int main()
{
    for(int i=0;i<N;i++){
        dp[i]=-1;
    }
    int T=1;
    cin>>T;
    while(T--){
        testCases();
    }
    return 0;
}