#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int current=arr[i],j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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
    insertionSort(arr,n);
    return 0;
}