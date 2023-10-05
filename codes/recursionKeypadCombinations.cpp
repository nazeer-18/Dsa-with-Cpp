#include<iostream>
using namespace std;
string keypad[10] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printKeypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    string ch = keypad[s[0]-'0'];
    for(int i = 0 ; i < ch.length();i++)
    {
        printKeypad(s.substr(1),ans + ch[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    printKeypad(s,"");
    return 0;
}