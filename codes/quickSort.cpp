#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;

int partition(int arr[],int l, int r) {
    int pi = arr[r];
    int i = l;
    for(int j = l; j < r; j++) {
        if(arr[j]<pi) {
            swap(arr[i],arr[j]);
            ++i;
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

void quickSort(int arr[], int l ,int r) {
    if(l<r) {
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main()
{
    int n;cin>>n;
    int arr[n];
    loop(i,n) cin>>arr[i];
    quickSort(arr,0,n-1);
    loop(i,n) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}