#include<bits/stdc++.h>
using namespace std;
void compute(vector<int> v, int k){
    int i=0,j=0,sum=0;
    while(i<k){
        sum+=v[i];
        i++;
    }
    if(sum%3==0){
        cout<<0<<" "<<k-1<<endl;
        return;
    }
    while(i<v.size()){
        sum+=v[i];
        sum-=v[j];
        if(sum%3==0){
            cout<<j+1<<" "<<i<<endl;
            return;
        }
        i++;
        j++;
    }
    cout<<"No such subarray exists"<<endl;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    compute(v,k);
    return 0;
}