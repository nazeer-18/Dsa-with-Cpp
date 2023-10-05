#include<iostream>
using namespace std;
int main()
    {   int low,high;
        cout<<" enter lower limit of range \n";
        cin>>low;
        cout<<" enter higher limit of range \n";
        cin>>high;
        cout<<" prime numbers from "<<low<<" to "<<high<<" are :";
        for(low;low<=high;low++)
            {
                int i;
                for(i=2;i<=low;i++)
                    {
                        if(low%i==0)
                            break;
                    }
                if(i==low)
                    cout<<low<<" ";
            }
        return 0;
    }