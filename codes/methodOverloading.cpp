#include<iostream>
using namespace std;
class sample{
    public:
        void func() {
            cout<<"func with no args"<<endl;
        }
        void func(int x) {
            cout<<"func with int args"<<endl;
        }
};
int main() {
    sample s;
    s.func();
    s.func(6);
}