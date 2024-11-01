#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minThrow(int n, int arr[]){
        unordered_map<int,int> lad,sn;
        for(int i=0;i<2*n;i+=2){
            if(arr[i]<arr[i+1])
                lad[arr[i]]=arr[i+1];
            else
                sn[arr[i]]=arr[i+1];
        }
        vector<int> dp(31,31);
        dp[1]=0;
        for(int i=1;i<30;i++){
            if(sn.find(i)!=sn.end()) continue;
            for(int j=1;j<=6 && i+j<=30;j++){
                if(sn.find(i+j)!=sn.end()) continue;
                dp[i+j]=min(dp[i+j],dp[i]+1);
                if(lad.find(i+j)!=lad.end() && dp[lad[i+j]]==31){
                    dp[lad[i+j]]=dp[i+j];
                }
            }
        }
        return dp[30];
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
}
    return 0;
}