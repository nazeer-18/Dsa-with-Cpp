#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements : \n";
        cin>>arr[i];
    }
    cout<<" sum of sub arrays is : ";
    for(int i=0;i<=n-1;i++)
    {
        int sum=0;
        for(int j=i;j<=n-1;j++)
        {  
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}