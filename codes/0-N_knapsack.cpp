#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int knapSack(int W, vector<int>& val, vector<int>& wt) {
        // code here
        int n=val.size();
        vector<int>dp(W+1,0);
        for(int i=0;i<=W;i++){
            for(int j=0;j<n;j++){
                if(i-wt[j]>=0)
                    dp[i]=max(dp[i],val[j]+dp[i-wt[j]]);
            }
        }
        return dp[W];
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int W;
        cin >> W;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        vector<int> val;
        int num;
        while (ss >> num) {
            val.push_back(num);
        }
        string str2;
        getline(cin, str2);
        stringstream ss2(str2);
        vector<int> wt;
        int num2;
        while (ss2 >> num2) {
            wt.push_back(num2);
        }
        Solution ob;
        cout << ob.knapSack(W, val, wt) << endl;
        cout << "~" << endl;
    }
    return 0;
}