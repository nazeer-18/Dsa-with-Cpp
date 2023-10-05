 #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cout<<" enter value of n \n";      //for a butterfly structure use n=4.;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int spacing=2*n-2*i;
         for(int j=1;j<=i;j++)
         cout<<"*";
         for(int k=1;k<=spacing;k++)
         cout<<" ";
         for(int j=1;j<=i;j++)
         cout<<"*";
         cout<<endl;
     }
     for(int i=n;i>=1;i--)
     {
         int spacing=2*n-2*i;
         for(int j=i;j>=1;j--)
         cout<<"*";
         for(int k=spacing;k>=1;k--)
         cout<<" ";
         for(int j=i;j>=1;j--)
         cout<<"*";
         cout<<endl;
     }
     return 0;
 }

  