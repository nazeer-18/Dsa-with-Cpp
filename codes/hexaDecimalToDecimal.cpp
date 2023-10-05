#include<iostream>
using namespace std;
int convert(string s)
{
    int j=s.size(),x=1,ans=0;
    for(int i=j-1;i>=0;i--)
    {
        if(s[i]>=48 && s[i]<=57)            //'0'=48 in ascii & in hexa it's 0
            ans+=(s[i]-48)*x;
        else if(s[i]>=65 && s[i]<=70)       //'A'=65 in ascii & in hexa it's 10
            ans+=(s[i]-55)*x;
        else
            {
                cout<<"it's not a hexa decimal number\n";
                return 0;
            }
        x*=16;
    }
    cout<<" it's hexadecimal value is : "<<ans;
}
int main()
{
    string n;
    cout<<" enter hexadecimal number to convert it into decimal form\n";
    cin>>n;
    convert(n);
    return 0;
}