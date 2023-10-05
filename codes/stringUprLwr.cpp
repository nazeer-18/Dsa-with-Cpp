#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s = "hbjkbBHBBBBbnjbn";
    string lwr = "", upr = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)>='a' && s.at(i)<='z')
        {
            lwr+=s.at(i);
            upr+=s.at(i)-32;
        }
        else if(s.at(i)>='A' && s.at(i)<='Z')
        {
            upr+=s.at(i);
            lwr+=s.at(i)+32;
        }
    }
    cout<<"Lower Transformation is : "<<lwr<<endl;
    cout<<"Upper Transformation is : "<<upr<<endl;
    //using in built function transform
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

}