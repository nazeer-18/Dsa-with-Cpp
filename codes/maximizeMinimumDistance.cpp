#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
bool isFeasible(int a[],int n,int k,int mid){
    int pos = a[0],i=1,cnt=1;
    while(i<n){
        if(a[i]-pos>=mid){
            pos=a[i];
            cnt++;
        }
        if(cnt==k) return true;
        i++;
    }
    return false;
}
int maximumDistance(int a[],int n,int k){
    sort(a,a+n);
    int result = -1;
    int mid,left = 1, right = a[n-1];
    while(left<right){
        mid = left+(right-left)/2;
        if(isFeasible(a,n,k,mid)){
            result = max(result,mid);
            left=mid+1;
        }else{
            right=mid;
        }
    }

    return result;
}
int main()
{
    int a[]={1,2,8,4,9};
    int n=5,k=3;
    cout<<maximumDistance(a,n,k)<<endl;
    return 0;
}