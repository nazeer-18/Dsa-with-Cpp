#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i< n; i++)
        cin>>a[i];
    int xorSum = 0;
    for(int i = 0; i < n ; i++)
        xorSum = xorSum ^ a[i];
    int key = 0;
    while(true){
        if(xorSum & (1<<key))
            break;
        key++;
    }
    int ans1=0;
    for(int i = 0; i <n;i++){
        if(a[i] & (1<<key))
            ans1 = ans1 ^ a[i];
    }
    cout<<ans1<<" "<<(xorSum^ans1);
}