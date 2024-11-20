#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxi(int a,int b,int c){
        return max(max(a,b),c);
    }
    int helper(string& s1,string& s2,string& s3,int a,int b,int c,int dp[21][21][21]){
        if(a<0 || b<0 ||c<0) return 0;
        if(dp[a][b][c]!=-1) return dp[a][b][c];
        if(s1[a]==s2[b] && s1[a]==s3[c]){
            return dp[a][b][c]=1+helper(s1,s2,s3,a-1,b-1,c-1,dp);
        }
        return dp[a][b][c]=maxi(helper(s1,s2,s3,a-1,b,c,dp),helper(s1,s2,s3,a,b-1,c,dp),helper(s1,s2,s3,a,b,c-1,dp));
    }
    int LCSof3(string& s1, string& s2, string& s3) { 
        int dp[21][21][21];
        memset(dp,-1,sizeof(dp));
        int a=s1.length()-1,b=s2.length()-1,c=s3.length()-1;
        helper(s1,s2,s3,a,b,c,dp);
        return dp[a][b][c];
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cin.ignore();
        Solution obj;
        cout << obj.LCSof3(s1, s2, s3) << endl;
        cout << "~"<< "\n";
    }
}