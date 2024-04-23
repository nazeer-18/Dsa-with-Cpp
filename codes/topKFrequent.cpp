#include<bits/stdc++.h>
using namespace std;
vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> mp;
        int i=0,n=nums.size();
        for(;i<n;i++) mp[nums[i]]++;
        vector<pair<int,int>> vp;
        for(auto it : mp){
            vp.push_back({it.second,it.first});
        }
        sort(vp.begin(),vp.end());
        vector<int> ans;
        n=vp.size();
        for(i=n-1;i>=n-k;i--){
            ans.push_back(vp[i].second);
        }
        return ans;
    }
int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topK(nums,k);
    for(auto it : ans) cout<<it<<" ";
    return 0;
}