#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,n) for(int i = a; i < n; i++)
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a) sort(a,a+a.size())
#define vi(v,n) vector<int> v(n,0)
#define inp(v) for(auto &it:v) cin>>it
using namespace std;

class Node{
    public:
        Node* child[26];
        bool isEnd;
        string s;
        bool isChild(char ch){
            return child[ch-'a']!=NULL;
        }
        void createChild(char ch){
            child[ch-'a']= new Node();
        }
        Node* getChild(char ch){
            return child[ch-'a'];
        }
        void assignString(string val){
            s=val;
        }
};

class Trie{
    private:
        Node* root;
    public:
        Trie(){
            root = new Node();
        }
        void insert(string s){
            Node* node = root;
            for(int i=0;i<s.length();i++){
                if(!node->isChild(s[i])){
                    node->createChild(s[i]);
                }
                node = node->getChild(s[i]);
            }
            node->isEnd=true;
            node->assignString(s);
        }
        Node* travelString(string s){
            Node* node = root;
            for(int i=0;i<s.length();i++){
                if(!node->isChild(s[i])) return NULL;
                node = node->getChild(s[i]);
            }
            return node;
        }
        void printString(Node* node){
            if(node==NULL) return;
            if(node->isEnd){
                cout<<node->s<<endl;
            }
            for(int i=0;i<26;i++){
                if(node->isChild(i+'a')){
                    printString(node->getChild(i+'a'));
                }
            }
        }
};

void testCases(){
    int n,q;
    cin>>n;
    string s;
    Trie trie;
    for(int i=0;i<n;i++){
        cin>>s;
        trie.insert(s);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s;
        Node* node = trie.travelString(s);
        trie.printString(node);
    }
}
int main()
{
    int T=1;
    cin>>T;
    while(T--){
        testCases();
    }
    return 0;
}