#include<iostream>
using namespace std;
int main()
    {
        int num;
        cout<<" till what number you want to print odd numbers? \n";
        cin>>num;
        cout<<" odd numbers till "<<num<<" are: ";
        for(int i=1;i<=num;i++)
            {
                if(i%2==0)
                    continue;
                    cout<<i<<" ";
            }

        return 0;
    }