#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        if(arr[j]>arr[j+1])
        {
            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];
        }
    }
    cout<<" sorted array is : ";
    for(int i=0;i<=n-1;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements \n";
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    return 0;
}