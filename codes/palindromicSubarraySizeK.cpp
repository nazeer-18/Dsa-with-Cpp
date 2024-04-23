#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n){
    int temp = n;
    int rev = 0;
    while(temp){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return rev == n;
}
int findPalindrome(int arr[],int n,int k){
    int num = 0;
    for(int i=0;i<k;i++){
        num = num*10 + arr[i];
    }
    if(isPalindrome(num)){
        return 0;
    }
    for(int i=k;i<n;i++){
        num = (num%(int)pow(10,k-1))*10 + arr[i];
        if(isPalindrome(num)){
            return i-k+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,3,5,1,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout<<findPalindrome(arr,n,k);
    return 0;
}