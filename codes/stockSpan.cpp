#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    stack<pair<int,int>> s;
    for(auto &i : arr){
        cin>>i;
    }
    for(int i = 0; i< n; i++){
        if(s.empty()){
            s.push({arr[i],1});
            arr[i] = 1;
        }
        else{
            int cnt=1;
            while(!s.empty() && s.top().first <= arr[i]){
                cnt+=s.top().second;
                s.pop();
            }
            s.push({arr[i],cnt});
            arr[i] = cnt;
        }
    }
    for(auto i : arr) cout<<i<<" ";
    return 0;
}