#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
#define endl cout<<endl;
using namespace std;
void Merge(int arr[], int l, int mid ,int r) {
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1],b[n2];
    loop(i,n1) a[i] = arr[l+i];
    loop(i,n2) b[i] = arr[mid+1+i];
    int i = 0, j = 0, k =l;
    while(i<n1 && j < n2) {
        if(a[i]<b[j]) {
            arr[k]= a[i];
            i++;k++;
        }
        else {
            arr[k] = b[j];
            j++;k++;
        }
    }
    while(i<n1) {
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2) {
        arr[k] = b[j];
        k++;j++;
    }
}
void MergeSort(int arr[],int l, int r) {
    if(l!=r) {
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    loop(i,n) cin>>arr[i];
    MergeSort(arr,0,n-1);
    loop(i,n) cout<<arr[i]<<" ";
    endl;
    return 0;
}