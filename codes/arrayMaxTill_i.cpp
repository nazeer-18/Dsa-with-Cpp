#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,iMax=INT_MIN;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements: \n";
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++)
    {    
        iMax=max(iMax,arr[i]);
        cout<<iMax<<" ";
    }    
    return 0;
}