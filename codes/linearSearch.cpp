#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<=n-1;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<" enter size of array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter element \n";
        cin>>arr[i];
    }
    int key;
    cout<<" enter key you want to search from array\n";
    cin>>key;
    cout<<linearSearch(arr,n,key);
    return 0;
}