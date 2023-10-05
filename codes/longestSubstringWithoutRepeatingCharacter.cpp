#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int start = -1,i=0,maxi=0;
    vector<int> v(256,-1);
    for(i = 0;i<s.length(); i++) {
        if(v[s[i]]>start){
            start = v[s[i]];
        }
        v[s[i]] = i;
        maxi = max(maxi,i-start);
    }
    cout<<maxi<<endl;
    return 0;
}