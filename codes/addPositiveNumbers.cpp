#include<iostream>
using namespace std;
int main()
    {
        int num,sum=0;
        cout<<"enter any number \n";
        cin>>num;
        while(num>=0)
            {   
                sum=sum+num;
                cout<<" enter any number\n";
                cin>>num;
            }
        cout<<" sum of positive numbers is :"<<sum<<endl;
    return 0;
    }