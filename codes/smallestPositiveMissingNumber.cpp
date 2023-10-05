# include "bits/stdc++.h"
using namespace std;
int main() {
    int n,ans=1,size=1e6+2;
    cin>>n;
    int a[n];
    bool check[size];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] > 0)
            check[a[i]] = true;
    }
    while(true){
        if(check[ans]==false)
            break;
        ans++;
    }
    cout<<ans;
    return 0;
}