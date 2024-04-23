#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
    int sum = 0,i=1;
    while(i<=sqrt(n)){
        if(n%i==0){
            if(i==1 || i==n/i){
                sum+=i;
            }
            else{
                sum+=(i+n/i);
            }
        }
        i++;
    }
    if(sum==n){
        return true;
    }
    return false;
}
int maxSubarray(int a[],int n,int k){
    int i=0,sum=0,res=0;
    if(k>n){
        return -1;
    }
    while(i<k){
        sum+=a[i];
        i++;
    }
    res=sum;
    while(i<n){
        sum+=a[i]-a[i-k];
        res=max(res,sum);
        i++;
    }
    return res;
}

void perfectNumbersSubarrayK(int a[],int n,int k){
    int i=0;
    while(i<n){
        if(isPerfect(a[i])){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
        i++;
    }
    cout<<maxSubarray(a,n,k)<<endl;
}
int main(){
    int a[] = {28,2,3,6,496,99,8128,24,36,120};
    int k = 4;
    perfectNumbersSubarrayK(a,10,k);
    return 0;
}