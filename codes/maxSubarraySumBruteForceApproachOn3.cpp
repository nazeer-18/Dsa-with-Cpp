#include "bits/stdc++.h"
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) 
        cin>>a[i];
    int maxSum = 0,currSum =0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            currSum = 0;
            for(int k = i; k <= j; k++) {
                currSum += a[k];
            }
            maxSum = max(maxSum,currSum);
        }
    }
    cout<<maxSum;
    return 0;
}