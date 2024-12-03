#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,n) for(int i = a; i < n; i++)
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a) sort(a,a+a.size())
#define vi(v,n) vector<int> v(n,0)
#define inp(v) for(auto &it:v) cin>>it
using namespace std;
class trie{
    public:
        trie* next[26];
        bool end;
        trie(){
            end=false;
            for(int i=0;i<26;i++) next[i]=NULL;
        }
};
void insert(string s,trie* root){
    int i=-1,n=s.length();
    while(++i<n){
        if(root->next[s[i]-'a']==NULL) root->next[s[i]-'a'] = new trie();
        root=root->next[s[i]-'a'];
    }
    root->end=true;
}
bool search(string s,trie* root){
    int i=-1,n=s.length();
    while(++i<n){
        if(root->next[s[i]-'a']==NULL) return false;
        root=root->next[s[i]-'a'];
    }
    return root->end;
}
void testCases(){
    int n;
    cin>>n;
    string s;
    trie* root = new trie();
    for(int i=0;i<n;i++){
        cin>>s;
        insert(s,root);
    }
    for(int i=0;i<n;i++){
        cin>>s;
        bool found = search(s,root);
        cout<<((found)?"Exists":"Not Exists");
    }

}
int main()
{
    testCases();
    return 0;
}