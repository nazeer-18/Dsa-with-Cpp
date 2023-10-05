#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements :\n";
        cin>>arr[i];
        if(arr[i]>=0)
            continue;
        else 
        {    
            cout<<" enter non negative integer only \n";
            i--;
        }
    }
    int dif=abs(arr[1]-arr[0]);
    int tempLength=2;
    int finalAns=2;
    for(int j=2;j<=n-1;j++)
    {
        if(arr[j]-arr[j-1]==dif)
            tempLength++;
        else    
        {    
            dif=abs(arr[j]-arr[j-1]);
            tempLength=2;
        }
        finalAns=max(finalAns,tempLength);
    }
    cout<<" longest arithmetic subarray is : "<<finalAns;
    return 0;
}