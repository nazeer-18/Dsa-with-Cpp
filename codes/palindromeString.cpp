#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    bool flag = true;
    for (int i = 0;i<count;i++) {
        if(a[i]!=a[count-i-1])
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Palindrome\n";
    else cout<<"Not a palindrome\n";
}