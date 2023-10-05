#include<iostream>
using namespace std;
int main() {
    string s = "hbfvjklncvujscjhfb";
    int cnt[26];
    for(int i = 0; i < 26; i++)
        cnt[i]=0;
    for(int i = 0; i < s.length(); i++)
        cnt[s[i]-'a']++;
    int maxi = 0;
    char ans=0;
    for(int i = 0; i <= 25;i++)
    {
        maxi= max(maxi,cnt[i]);
        if(maxi==cnt[i])
            ans = i + 'a';
    }
    cout<<maxi<<" "<<ans<<endl;
}