#include<iostream>
using namespace std;
class A{
    public :
        void func() {
            cout<<"func of class A"<<endl;
        }
};
class B:public A{
    public:
        void show() {
            cout<<"show of class B"<<endl;
        }
};
class C{
    public:
        void sample() {
            cout<<"sample of class C"<<endl;
        }
};
class D : public B,public C{
    public:
        void print() {
            cout<<"print of class D"<<endl;
        }
};
int main() {
    D d;
    d.func();
    d.show();
    d.sample();
    d.print();
}