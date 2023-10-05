#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            if(arr[j]>arr[j+1])             //ascending sort > symbol
            {   
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }   
        }
    }
    int midIndex=n/2,lowerLimit=0,upperLimit=n,lowerCount=0,upperCount=0;
    while(midIndex>=0)
    {
        if(key==arr[midIndex])
            return midIndex;
        else if(lowerLimit==upperLimit)
            return -1;
        else if(key>arr[midIndex])       //right portion
        {
            if(lowerCount==0) 
                upperLimit=n;        //only entering right portions
            lowerLimit=midIndex+1;
            upperCount++;
        }
        else                       //left portion
        {
            if(upperCount==0)        //only entering left portions
                 lowerLimit=0;            
            upperLimit=midIndex-1;
            lowerCount++;
        }
        midIndex=(lowerLimit+upperLimit)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<" enter size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<" enter array elements \n";
        cin>>arr[i];
    }
    int key;
    cout<<" enter key element to search \n";
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}