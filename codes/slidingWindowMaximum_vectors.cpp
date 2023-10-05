#include<bits/stdc++.h>
using namespace std;
int main() {
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(auto &i : nums) {
            cin>>i;
        }
        vector<int>l,r(n);
        for(int i = 0;i<n;i++){
            l.push_back(nums[i]);
            if(i%k!=0){
                l[i]=max(l[i],l[i-1]);
            }
        }
        r[n-1]=(nums[n-1]);
        for(int i = n-2;i>=0;i--){
            r[i]=(nums[i]);
            if(i%k!= k-1){
                r[i]=max(r[i],r[i+1]);
            }
        }
        vector<int>ans;
        for(int i = 0; i < n-k+1 ; i++){
            ans.push_back(max(r[i],l[i+k-1]));
        }
        for(auto i : ans){
            cout<<i<<" ";
        }
}