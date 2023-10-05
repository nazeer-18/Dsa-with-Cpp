#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
class student{
    //All variables must be of pointers i.e using dma
    int *age=new int;
    public:
    //by default all attributes will be private
        string *name=new string;
        bool *gender=new bool;
        student() {
            cout<<"Default constructor called\n";
            *name="Default";
            *age=18;
            *gender=1;
        }
        student(string n,int a,bool g) {
            *name=n;
            *age=a;
            *gender=g;
            //cout<<"Parametarized constructor called\n";
        }
        void printInfo() {
            cout<<"Name = "<<*name<<endl;
            cout<<"Age = "<<*age<<endl;
            cout<<"Gender = "<<*gender<<endl;
        }
        void setAge(int a) {
            *age = a;
        }
        int getAge() {
            return *age;
        }
        ~student() {
            cout<<"Destructor called\n";
        }
        bool operator == (student &a) {
            if(*name==*a.name && *age==*a.age && *gender==*a.gender)
                return true;
            return false;
        }
        //for deep copy
        student(student &a) {
            *name=*a.name;
            *age=*a.age;
            *gender=*a.gender;
        }
};
int main()
{
    student a;
    *a.name="nazeer";
    cout<<*a.name<<endl;
    student arr[1];
    loop(i,1) {
        cout<<"Name : ";
        cin>>*arr[i].name;
        cout<<"Age : ";
        int age;
        cin>>age;
        arr[i].setAge(age);
        cout<<"Gender : ";
        cin>>*arr[i].gender;
    }
    loop(i,1)
        arr[i].printInfo();
    student b("vazeer",17,1);
    cout<<"b : "<<endl;
    b.printInfo();
    student c(b);
    cout<<"c : "<<endl;
    c.printInfo();
    *b.name="shila";
    b.setAge(5);
    *b.gender=0;
    cout<<"after shallow copying b into c and changing b"<<endl;
    cout<<"c : "<<endl;
    c.printInfo();
    cout<<"b : "<<endl;
    b.printInfo();
    student d = b;
    cout<<"d : "<<endl;
    d.printInfo();
    *d.name="some";
    cout<<"after shallow copying b into d and changing d"<<endl;
    cout<<"d : "<<endl;
    d.printInfo();
    cout<<"b : "<<endl;
    b.printInfo();
    cout<<(b==c)<<endl;
    cout<<(b==d)<<endl;
    cout<<(c==d)<<endl;
    return 0;
} 