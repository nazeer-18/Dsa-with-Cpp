#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
long long merge(int arr[], int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;
    int a[n1],b[n2];
    loop(i,n1) a[i] = arr[left+i];
    loop(i,n2) b[i] = arr[mid+i+1];
    int i = 0,j=0,k=left,inv=0;
    while(i<n1 && j<n2) {
        if(a[i]<b[j]) {
            arr[k] = a[i];
            k++;i++;
        }
        else{
            inv += n1-i;
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1) {
        arr[k] = a[i];
        i++;k++;
    }
    while(j<n2) {
        arr[k] = b[j];
        j++;k++;
    }
    return inv;
}
long long mergeSort(int arr[] , int left, int right) {
    int inv = 0;
    if(left<right) {
        int mid  = (right+left)/2;
        inv+=mergeSort(arr,left,mid);
        inv+=mergeSort(arr,mid+1,right);
        inv+=merge(arr,left,mid,right);
    }
    return inv;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    loop(i,n) cin>>arr[i];
    cout<<mergeSort(arr,0,n-1);
    return 0;
}