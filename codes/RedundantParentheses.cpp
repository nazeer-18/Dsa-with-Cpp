#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            if(st.empty() || s[i]=='(' || st.top()=='('){
                st.push(s[i]);
            }
        }
        else if(s[i]==')') {
            if(st.empty() || st.top()=='('){
                cout<<"YES\n";
                return 0;
            }
            st.pop();
            st.pop();
        }
    }
    cout<<"NO\n";
    return 0;
}