#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
bool isFeasible(int a[],int n,int m,int mid){
    int ns=1,sum=0,i=0;
    while(i<n){
        if(a[i]>mid) return false;
        else{
            if(sum+a[i]>mid){
                sum=a[i];
                ns++;
                if(ns>m){
                    return false;
                }
            }else{
                sum+=a[i];
            }
        }
        i++;
    }
    return true;
}
int findPages(int a[],int n,int m){
    if(m>n) return -1;
    long long start=0,end=0,mid=0,ans=0,i=0;
    while(i<n){
        end+=a[i];
        i++;
    }
    ans = end;
    while(start<=end){
        mid = start+(end-start)/2;
        if(isFeasible(a,n,m,mid)){
            ans=min(ans,mid);
            end=mid-1;
        }else{
            start=mid+1;
        }
    }

    return ans;
}
int main()
{
    int a[] = {12,34,67,90};
    int m = 2;
    cout<<findPages(a,sizeof(a)/4,m);
    return 0;
}