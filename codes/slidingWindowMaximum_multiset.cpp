//its time complexity is O(nlogn)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    multiset<int,greater<int>> ms;
    vector<int> ans;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    ans.push_back(*ms.begin());
    for(int i = k; i< n; i++){
        ms.insert(a[i]);
        ms.erase(ms.lower_bound(a[i-k]));
        ans.push_back(*ms.begin());
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}