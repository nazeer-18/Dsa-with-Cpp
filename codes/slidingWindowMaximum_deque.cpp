#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    deque<int> dq;
    vector<int> ans;
    for(int i = 0; i < k; i++) {
        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    for(int i = k; i < n ; i++) {
        if(dq.front()==i-k) {
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
}