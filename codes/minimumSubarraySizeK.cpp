#include<bits/stdc++.h>
using namespace std;
int findMinsum(vector<int>a,int n,int k){
    int ans = INT_MAX,sum = 0,i=0;
    while(i<k){
        sum+=a[i];
        i++;
    }
    ans = min(ans,sum);
    while(i<n){
        sum+=a[i];
        sum-=a[i-k];
        ans = min(ans,sum);
        i++;
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findMinsum(a,n,k)<<endl;
    return 0;
}