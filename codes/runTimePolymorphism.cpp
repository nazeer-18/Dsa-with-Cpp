#include<iostream>
using namespace std;
class A{
    public:
        virtual void func(){
            cout<<"func of A class"<<endl;
        }
        void samp(){
            cout<<"samp of A class"<<endl;
        }
};
class B : public A{
    public:
        void func() {
            cout<<"func of B class"<<endl;
        }
        void samp() {
            cout<<"samp of B class"<<endl;
        }
};
int main() {
    A *baseptr;
    B obj;
    baseptr = &obj;
    baseptr -> func();
    baseptr -> samp();
    B b;
    A a;
    b.samp();
    b.func();
    a.samp();
    a.func();
}