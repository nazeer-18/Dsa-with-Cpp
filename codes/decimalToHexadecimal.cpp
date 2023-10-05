#include<iostream>
using namespace std;
int convert( int n)
{
    string s;
    int l=0,temp=n;
    while(temp)
    {
        l++;
        temp/=16;
    }
    while(n)
    {
        for(int i=l-1;i>=0;i--)
        {
            if(n%16>=0 && n%16<=9)
                s[i]=48+(n%16);
            else 
                s[i]=55+(n%16);
            n/=16;
        }
    }
    cout<<" it's hexadecimal value is : ";
    for(int i=0;i<=l-1;i++)
        cout<<s[i];
}
int main()
{
    int num;
    cout<<" enter any number to convert into hexadecimal form \n";
    cin>>num;
    if(num>=0)
        convert(num);
    else 
        cout<<" it's not in decimal form \n";
    return 0;
}