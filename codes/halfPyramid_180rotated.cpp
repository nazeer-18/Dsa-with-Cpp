#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<" enter number of rows \n";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
      for(int j=1;j<=rows;j++)
      {
          if(j<=rows-i)
          cout<<"   ";
          else
          cout<<" * "; 
      }
      cout<<"\n";
    }
    return 0;
}