#include<iostream>
using namespace std;
class A{
    public:
        void func() {
            cout<<"func of class A\n";
        }
};
class B : public A{

};
class C : public A {

};
int main() {
    B b;
    C c;
    b.func();
    c.func();
}