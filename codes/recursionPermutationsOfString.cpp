#include<iostream>
using namespace std;
void permutate(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<s.length();i++)
    {
        permutate(s.substr(0,i)+s.substr(i+1),ans+s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<"Permutatons are : "<<endl;
    permutate(s,"");
    return 0;
}