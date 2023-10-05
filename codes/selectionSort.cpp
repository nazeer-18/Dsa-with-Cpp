#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int minValue=arr[i];
        for(int j=i+1;j<=n-1;j++)
            minValue=min(minValue,arr[j]);
        for(int j=i+1;j<=n-1;j++)
        {
            if(minValue==arr[j])
            {   
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
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
        cout<<" enter array element's \n";
        cin>>arr[i];
    }
    selectionSort(arr,n);
    return 0;
}