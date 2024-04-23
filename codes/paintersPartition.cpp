#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
bool isFeasible(int a[],int n,int k,long long mid){
    int np=1,i=0;
    long long sum = 0;
    while(i<n){
        if(a[i]>mid) return false;
        else{
            if(a[i]+sum>mid){
                sum=a[i];
                np++;
                if(np>k) return false;
            }else{
                sum+=a[i];
            }
        }
        i++;
    }
    return true;
}
int minTime(int a[],int n,int k){
    int i = 0;
    long long low = 0, high = 0,mid;
    while(i<n){
        low = (low<a[i])?a[i]:low;
        high+=a[i];
        i++;
    }
    while(low<=high){
        mid = low + (high-low)/2;
        if(isFeasible(a,n,k,mid)){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}                                                         
int main()
{
    int a[] = {10,20,30,90};
    int m = 2;
    cout<<minTime(a,sizeof(a)/4,m)<<endl;
    return 0;
}