#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<int> dp(capacity+1,0);
        for(int i=0;i<n;i++){
            for(int j=capacity;j>=wt[i];j--) dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
        }
        return dp[capacity];
    }
};

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;
        ss >> numberOfItems;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }
        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}