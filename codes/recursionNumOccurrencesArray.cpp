#include<iostream>
using namespace std;
int first(int arr[],int n,int key,int i)
{
    if(i==n)
        return -1;
    if(arr[i]==key)
        return i;
    first(arr,n,key,i+1);
}
int last(int arr[],int n, int key,int i)
{
    if(i==n)
        return -1;
    if(arr[n-i-1]==key)
        return n-i-1;
    last(arr,n,key,i+1);
}
int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cin>>key;
    cout<<first(a,n,key,0)<<endl;
    cout<<last(a,n,key,0);
    return 0;
}