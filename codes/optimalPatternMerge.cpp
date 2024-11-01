#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int optimalPatternMerge(int a[],int n){
    int cost=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    loop(i,n) pq.push(a[i]);
    while(pq.size()>1){
        int sum=0;
        sum+=pq.top();
        pq.pop();
        sum+=pq.top();
        pq.pop();
        cost+=sum;
        pq.push(sum);
    }
    return cost;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    cout<<optimalPatternMerge(a,n);
    return 0;
}   