#include<iostream>
using namespace std;
int main()
    {
        char ch;
        cout<<" enter any alphabet to check if its vowel or consonant : \n";
        cin>>ch;
        switch(ch)
        {
            case 'a' :
            cout<<" a is vowel \n";
            break;
            case 'e' :
            cout<<" e is vowel \n";
            break;
            case 'i' :
            cout<<" i is vowel \n";
            break;
            case 'o' :
            cout<<" o is vowel \n";
            break;
            case 'u' :
            cout<<" u is vowel \n";
            break;
            default :
            cout<<ch<<" is consonant \n";
            break;
        }
        return 0;
    }