#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    //cout<<n/a+n/b-n/(a*b); //it wors only for coprimes | when hcf of a,b is 1
    cout << (n / a) + (n / b) - n / ((a * b) / (__gcd(a, b)));
}