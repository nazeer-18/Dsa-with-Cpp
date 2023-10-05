#include<iostream>
using namespace std;
int max(int x,int y, int z)
{
    if(x>y && y>z)
        return x*x;
    else if(y>x && x>z)
        return y*y;
    else
        return z*z;
}
int pyth(int p,int q,int r)
{
    (p*p+q*q+r*r==2*max(p,q,r))?cout<<" it's a pythagoras triplet\n":cout<<" not a pythagoras triplet\n";
}
int main()
{
    int a,b,c;
    cout<<" enter any three values to check if it's pythagoras triplet or not\n";
    cin>>a>>b>>c;
    pyth(a,b,c);
    return 0;
}
