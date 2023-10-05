#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char s[n+1];
    cin.getline(s,n);
    cin.ignore();
    int i = 0,cnt=0,len=0,st=0;
    while(1)
    {
        if(s[i] == ' ' || s[i] =='\0')
        {
            cnt = max(cnt,len);
            if(cnt==len) st = i-1;
            len=0;
        }
        else len++;
        if(s[i]=='\0') break;
        i++;
}   cout<<cnt<<" index are "<<st-cnt+1<<":"<<st<<endl;
    for(int j = st-cnt+1;j<=st;j++)cout<<s[j];
}