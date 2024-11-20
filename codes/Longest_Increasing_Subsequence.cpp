#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int longestSubsequence(vector<int>& a) {
        // code here
        vector<int>dp;
        int i=0,n=a.size(),len=1;
        dp.push_back(a[0]);
        while(++i<n){
            if(dp.back()<a[i]) dp.push_back(a[i]),len++;
            else{
                int idx = lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
                dp[idx]=a[i];
            }
        }
        return len;
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);
        Solution obj;
        cout << obj.longestSubsequence(arr) << endl;
    }
    return 0;
}