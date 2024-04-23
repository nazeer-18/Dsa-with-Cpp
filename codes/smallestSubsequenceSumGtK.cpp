#include<bits/stdc++.h>
using namespace std;
void smallestSubsequenceSumGtK(int a[],int n,int k){
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
    }
    int sum=0,count=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
        count++;
        if(sum>k){
            cout<<count;
            break;
        }

}
int main(){
    int a = [2, 3, 1, 2, 4, 3];
    int k = 7;
    int n = sizeof(a)/sizeof(a[0]);
    smallestSubsequenceSumGtK(a,n,k);
}