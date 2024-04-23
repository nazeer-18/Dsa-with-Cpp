#include <bits/stdc++.h>
using namespace std;
vector<int> minPartition(int n)
    {
        // code here
        vector<int>ans;
        int a[]={1,2,5,10,20,50,100,200,500,2000};
        int i=9;
        while(n>0){
            if(a[i]>n) i--;
            else{
                ans.push_back(a[i]);
                n-=a[i];
            }
        }return ans;
    }
int main() {
    int n;
    cin>>n;
    vector<int>ans=minPartition(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}