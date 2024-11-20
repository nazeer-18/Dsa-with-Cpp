#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,n) for(int i = a; i < n; i++)
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a) sort(a,a+a.size())
#define vi(v,n) vector<int> v(n,0)
#define inp(v) for(auto &it:v) cin>>it
using namespace std;
int dp[100][100][5];
int klcs(string& s1,string& s2,int a,int b,int k){
    if(a<0 or b<0) return 0;
    if(dp[a][b][k]!=-1) return dp[a][b][k];
    int c1=0,c2=0,c3=0;
    if(s1[a]==s2[b]) c1=1+klcs(s1,s2,a-1,b-1,k);
    if(k>0) c2=1+klcs(s1,s2,a-1,b-1,k-1);
    c3=max(klcs(s1,s2,a-1,b,k),klcs(s1,s2,a,b-1,k));
    return max({c1,c2,c3});
}
void testCases(){
    int k;
    string s1,s2;
    cin>>s1>>s2>>k;
    memset(dp,-1,sizeof(dp));
    cout<<klcs(s1,s2,s1.length()-1,s2.length()-1,k);
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