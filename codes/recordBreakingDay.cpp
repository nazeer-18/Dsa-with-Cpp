#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter number of visitors\n";
        cin>>arr[i];
            if(arr[i]>=0)
                continue;
            else 
                cout<<" enter non negative values only: \n";
                i--;
    }
    int iMax=-1;
    int count=0;
    arr[n]=-1;
    for(int i=0;i<=n-1;i++)
    {
        if((arr[i]>iMax)&&(arr[i]>arr[i+1]))
            count++;
        iMax=max(iMax,arr[i]);
    }
    cout<<" number of record breaking days is : "<<count;    
    return 0;
}