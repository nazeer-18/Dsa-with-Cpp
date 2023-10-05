#include<bits/stdc++.h>
#define ll long long
using namespace std;
//Recursion O(n^n) 
int catalan(int n){
    if(n<=1) return 1;
    int res =0;
    for(int i=0;i<n;i++){
        res+= catalan(i)*catalan(n-i-1);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    long long m = 1e9+7;
    //Dp approach O(n*n)
    long long cat[n+1] ={0};
    cat[0]=cat[1]=1;
    for(int i =2;i<=n;i++){
        for(int j=0;j<i;j++){
            cat[i] = (cat[i]+(cat[j]*cat[i-j-1])%m)%m;
        }
    }
    cout<<cat[n]<<endl;
    return 0;
}