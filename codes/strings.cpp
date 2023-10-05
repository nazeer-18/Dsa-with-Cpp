#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string str = "kkb hvhv";
    string str1(5,'s');
    string str2;    //word
    string str3;   //sentence
    getline(cin,str3);  //takes complete line
    cin>>str2;      //breaks input at first space
    string str4(str3);  //copy of string
    //appending
    cout<<str3+str2<<endl;
    str3.append(str2);
    cout<<str2<<endl;
    str1+=str3;
    cout<<str1<<endl;
    cout<<str<<"\n"<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4;
    cout<<str3.at(0)<<" "<<str3[0]<<endl;
    str1.clear();
    str2.clear();
    str3.clear();
    cout<<str1<<str2<<str3<<str4<<endl;
    str1="aa";
    str2="ad";
    cout<<str1.compare(str2)<<endl;
    cout<<str1.empty()<<endl;
    str1.clear();
    cout<<str1.empty()<<endl;
    str1="good boy";
    cout<<str1<<"\n";
    str1.erase(4,4);
    cout<<str1<<"\n";
    cout<<str1.find("oo")<<"\n";
    cout<<str1.find("e")<<"\n";
    str1.insert(0,"hey ");
    cout<<str1<<endl;
    cout<<str1.size()<<endl;
    cout<<str1.length()<<endl;
    cout<<str1.substr(4,4)<<endl;
    str1.begin();
    str1.end();
    sort(str1.begin(),str1.end());
    cout<<str1;
}