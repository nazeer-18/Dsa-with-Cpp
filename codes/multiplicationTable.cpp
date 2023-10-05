#include<iostream>
using namespace std;
int main()
    {

        int n;
        cout<<" enter a positive integer to display mulipliation table \n";
        cin>>n;
        cout<<" multiplication table of "<<n<<" is : \n";
        for(int i=1;i<=10;i++)
            {
                cout<<n<<"*"<<i<<"="<<n*i<<endl;
            }
        return 0;

    }