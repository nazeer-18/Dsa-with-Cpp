#include<bits/stdc++.h>
using namespace std;
int precedence(char ch) {
    if(ch=='^') return 3;
    if(ch=='*' || ch == '/') return 2;
    if(ch=='+' || ch=='-') return 1;
    return -1;
}
string to_preFix(string str) {
    stack<char> s;
    string res="";
    reverse(begin(str),end(str));
    for(int i = 0; i< str.length(); i++) {
        if(( str[i] >= 'a' && str[i] <= 'z' ) ||(str[i]>='A' && str[i]<='Z')) {
            res+=str[i];
        }
        else if(str[i]==')') {
            s.push(str[i]);
        }
        else if(str[i]=='(') {
            while(!s.empty() && s.top()!=')') {
                res+=s.top();
                s.pop();
            }
            if(!s.empty()) {
                s.pop();
            }
        }
        else {
                while(!s.empty() && precedence(str[i])<precedence(s.top())) {
                    res+=s.top();
                    s.pop();
                }
                s.push(str[i]);  
        }
    }
    while(!s.empty()) {
        res+=s.top();
        s.pop();
    }
    reverse(begin(res),end(res));
    return res;
}
int main()
{
    cout<<to_preFix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}