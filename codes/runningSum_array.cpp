#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter size of the array\n";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++)
    {   
        cout<<" enter array elements \n ";
        cin>>arr[i];
    }  
    cout<<" running sum of array is : "; 
    for(int i=0;i<=n-1;i++)
        cout<<" "<<(sum+=arr[i]);  
    return 0;
}