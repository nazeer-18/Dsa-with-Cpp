#include<bits/stdc++.h>
using namespace std;
int main(){
    const int m=1e9+7;
    long long n,ns=1,abc=0,bc=0,c=0;
    string s;
    cin>>n>>s;
    while(--n>=0){
        if(s[n]=='a'){
            abc=(abc+bc)%m;
        }else if(s[n]=='b'){
            bc=(bc+c)%m;
        }else if(s[n]=='c'){
            c=(c+ns)%m;
        }else{
            abc=(abc*3l+bc)%m;
            bc=(bc*3l+c)%m;
            c=(c*3l+ns)%m;
            ns=(ns*3l)%m;  
        }
    }
    cout<<abc<<endl;
}