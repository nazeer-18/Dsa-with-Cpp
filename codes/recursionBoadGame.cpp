#include "bits/stdc++.h"
using namespace std;
int countPaths(int start, int end)
{
    if(start == end)
    {
        return 1;
    }
    int ans = 0;
    for(int i = 1; i <= 6; i++)
    {
        if(start<=end)
            ans += countPaths(start+i,end);
    }
    return ans;
}
int main()
{
    cout<<countPaths(0,3)<<endl;
    return 0;
}