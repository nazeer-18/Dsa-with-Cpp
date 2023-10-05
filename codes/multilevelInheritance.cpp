#include<iostream>
using namespace std;
class A{
    public:
        void func() {
            cout<<"func of class A"<<endl;
        }
};
class B : public A{
    public:
        void sample() {
            cout<<"Sample of class B"<<endl;
        }
        void func() {
            cout<<"func of class B"<<endl;
        }
};
class C : public B {
    
};
int main() {
    C c;
    c.sample();
    c.func();
}