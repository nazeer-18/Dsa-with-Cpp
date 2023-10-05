#include<bits/stdc++.h>
using namespace std;
int knapSack(int wt[], int val[] ,int n,int W)
{
    if(n==0 || W == 0)
        return 0;
    if(wt[n-1]>W)
        return knapSack(wt,val,n-1,W);
    return max(knapSack(wt,val,n-1,W),knapSack(wt,val,n-1,W-wt[n-1])+val[n-1]);
}
int main()
{
    int n = 3;
    int wt[] = {10,20,30};
    int val[] = {100,50,150};
    int W = 50;
    cout<<knapSack(wt,val,n,W);
}