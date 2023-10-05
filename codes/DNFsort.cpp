#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int> v;
    loop(i,n) {
        cin>>k;
        v.push_back(k);
    }
    int low = 0, mid=0,high=n-1;
    while(mid<=high) {
        cout<<v[mid]<<endl;
        if(v[mid]==0) {
            swap(v[low],v[mid]);
            low++;mid++;
        }
        else if(v[mid]==1) mid++;
        else if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
    }
    loop(i,n) cout<<v[i]<<" ";
    return 0;
}