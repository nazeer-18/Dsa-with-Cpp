#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    for(auto &i : v){
        cin>>i;
    }
    int i = 0;
    sort(v.begin(),v.end());
    for( i = 0; i<= n-3; i++){
        int j = i+1, k = n-1;
        while(j<k){
            if(v[i]+v[j]+v[k]==target){
                cout<<"found : " << v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                return 0;
            }
            if(v[j]+v[k]<target-v[i]){
                j++;
            }
            else{
                k--;
            }
        }
    }
        cout<<"Not Found\n"<<endl;
    return 0;
}