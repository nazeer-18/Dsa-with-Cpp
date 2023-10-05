#include <iostream>
using namespace std;
void add(string n1, string n2)
{
    int  temp = 0,x=1,decSum=0,l1=n1.size()-1,l2=n2.size()-1;
    string bsum;
    while (l1 >= 0 || l2 >= 0 || temp!=0)
    {
        temp += (l1>=0)?n1[l1] - '0':0;
        temp += (l2>=0)?n2[l2] - '0':0;
        bsum = char(temp%2 + '0') + bsum;
        decSum += x*(temp%2);
        temp/=2;
        l1--;l2--;x*=2;
    }
    cout << " sum of binary numbers is : " << bsum << " "<<decSum;
}
int main()
{
    string num1, num2;
    cout << " enter 1 st binary number to perform addition :\n";
    cin >> num1;
    cout << " enter 2 nd number now \n";
    cin >> num2;
    add(num1, num2);
    return 0;
}