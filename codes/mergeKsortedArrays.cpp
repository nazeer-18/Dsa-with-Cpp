#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<vector<int>> a(k,vector<int>(k));   
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    vector<int> ans;
    vector<int> idx(k,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<k;i++){
        pq.push({a[i][0],i});
    }
    while(!pq.empty()){
        pair<int,int> p=pq.top();
        pq.pop();
        ans.push_back(p.first);
        idx[p.second]++;
        if(idx[p.second]<k) pq.push({a[p.second][idx[p.second]],p.second});
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}