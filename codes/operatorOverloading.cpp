#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
        Complex(int real = 0, int imaginary = 0) {
            this-> real = real;
            this-> imaginary = imaginary;
        }
        Complex operator + (Complex &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imaginary = imaginary + obj.imaginary;
            return res;
        }
        void display() {
            cout<<real <<" + i"<<imaginary<<endl;
        }

};
int main() {
    Complex c1(12,7),c2(6,7);
    Complex c3 = c1 + c2;
    c3.display();
}