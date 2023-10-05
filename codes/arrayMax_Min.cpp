#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements \n";
        cin>>arr[i];
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<" maximun number is : "<<maxNo<<endl<<" minimum number is : "<<minNo;
    return 0;
}