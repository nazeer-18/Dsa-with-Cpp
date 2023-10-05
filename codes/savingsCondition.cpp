#include<iostream>
using namespace std;
int main(){

    int savings;
    cout<<" enter your savings\n";
    cin>>savings;
    if(savings>5000)
        if(savings>10000)
             cout<<" road trip to ooty \n";
        else
            cout<<" go for shopping and then dinner \n";
    else if(savings>2000)
            cout<<" go for shopping \n";
        else 
            cout<<" stay home stay safe \n";

        return 0;
}