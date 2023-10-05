#include<bits/stdc++.h>
using namespace std;
string isBalanced(string s) {
    int len = s.length();
    stack<char> a;
    for(int i = 0; i < len; i++) {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            a.push(s[i]);
        else {
            if(s[i]==')') {
                if(!a.empty() && a.top()=='(') {
                    a.pop();
                }
                else {
                    return "Not  balanced";
                }
            }
            else if(s[i]==']') {
                if(!a.empty() && a.top()=='[') {
                    a.pop();
                }
                else {
                    return "Not  balanced";
                }
            }
            else if(s[i]=='}') {
                if(!a.empty() && a.top()=='{') {
                    a.pop();
                }
                else {
                    return "Not  balanced";
                }
            }
        }
    }
    if(!a.empty()) return "Not Balanced ";
    return "Balanced ";
}
int main()
{
    string s = "}";
    cout<<isBalanced(s)<<endl;
    return 0;
}