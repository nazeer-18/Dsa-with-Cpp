#include<bits/stdc++.h>
using namespace std;
long long int findSubarray(vector<long long int> &a, int n ) {
        //code here
        unordered_map<long,long>mp;
        long long sum=0,t=0;
        for(auto it:a){
            t+=it;
            if(t==0) sum++;
            if(mp.find(t)!=mp.end()) sum+=mp[t];
            mp[t]++;
        }
        return sum;
    }
int main(){
    vector<long long int> a={1,-1,1,-1};
    cout<<findSubarray(a,a.size());
}