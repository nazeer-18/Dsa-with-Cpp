#include<iostream>
using namespace std;
class A {
    public:
        void func() {
            cout<<"func of Class A"<<endl;
        }
};
class B{
    public:
        void func1() {
            cout<<"func of Class B "<<endl;
        }
        void sample() {
            cout<<"Sample of class B"<<endl;
        }
};
class C : public A, public B{

};
int main() {
    C c;
    c.sample();
    c.func();
}