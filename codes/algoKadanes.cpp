// used to calculate maximum sum of a subarray it's time complexity is : O(n) *** Most Efficient way ***
//calculates cummulative sum if its negative then make it zero
#include "bits/stdc++.h"
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],currSum = 0, maxSum = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        currSum +=  a[i];
        if(currSum < 0)
            currSum = 0 ;
        maxSum = max(maxSum,currSum);
    }
    cout<<maxSum;
    return 0;
}