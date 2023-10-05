#include<bits/stdc++.h>
using namespace std;
void reverseSentence(string str) {
    stack<string> s;
    int i=0;
    for(int i =0;i < str.length();i++) {
        string a="";
        while(str[i]!=' ' && i < str.length()){
            a+=str[i];
            i++;
        }
            s.push(a);
    }
    while(s.empty()==false) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    string str ;
    getline(cin,str);
    reverseSentence(str);
    return 0;
}