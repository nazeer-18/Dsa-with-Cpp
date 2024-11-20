#include <bits/stdc++.h>
using namespace std; 
class Solution {
    public:
    long long int count(vector<int> coins, int sum) {
        int n=coins.size();
        vector<long long >dp(sum+1,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;coins[i]+j<=sum;j++){
                dp[coins[i]+j]+=dp[j];
            }
        }
        return dp[sum];
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }
    return 0;
}