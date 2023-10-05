#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return (sum);
}
int main()
{
    int a, b;
    cout << " enter values of a and b to add \n";
    cin >> a >> b;
    add(a, b);
    cout << " sum is :" << add(a, b);
    return 0;
}