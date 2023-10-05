#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s="64569";
    sort(s.begin(),s.end(),greater <int>());
    cout<<s;
}