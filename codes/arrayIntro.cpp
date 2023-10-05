#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<" enter array elements\n";
        cin>>arr[i];
    }
    cout<<" array elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}