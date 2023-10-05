#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],cummSum[n+1];
    for(int i = 0 ; i < n; i++) {
        cin>>a[i];
        cummSum[i] = a[i] + ((i==0)?0:cummSum[i-1]); 
    }
    int maxSum =0,currSum=0;
    for(int i = 0 ; i < n; i++) {
        for(int j = i; j < n; j++) {
            cummSum[-1]=0;
            currSum = cummSum[j] - cummSum[i-1];
            maxSum = max(currSum,maxSum);
        }
        
    }
    cout<<maxSum;
    return 0;
}