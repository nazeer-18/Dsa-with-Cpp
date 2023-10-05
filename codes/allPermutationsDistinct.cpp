// no duplicate permutations
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> a, int idx) {
    if(idx==a.size()) {
        ans.push_back(a);
        return;
    }
    for(int i = idx; i < a.size(); i++) {
        if(i!=idx && a[i]==a[idx])
            continue;
        swap(a[i],a[idx]);
        permute(a,idx+1);
    }
    return;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    sort(a.begin(),a.end());
    permute(a,0);
    for(auto i : ans) {
        for(auto j : i) {
            cout<<j<<" "; 
        }
        cout<<endl;
    }
    return 0;
}