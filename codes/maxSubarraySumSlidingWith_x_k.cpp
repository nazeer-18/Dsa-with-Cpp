#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int maxSum(int a[],int n,int k,int x){
    int sum = 0,i=0,ans=INT_MIN;
    while(i<k){
        sum+=a[i];
        i++;
    }
    if(sum<x) ans=sum;
    while(i<n){
        sum-=a[i-k];
        sum+=a[i];
        if(sum<x && sum>ans) ans=sum;
        i++;
    }
    return ans;
}
int main()
{
    int a[]={7,5,4,6,8,9};
    int k=3,x=20;
    cout<<maxSum(a,sizeof(a)/4,k,x)<<endl;
    return 0;
}