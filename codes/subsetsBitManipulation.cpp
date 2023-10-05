#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"size";
    cin>>size;
    char a[size];
    cout<<"enter set elements ";
    for(int i = 0 ; i < size; i++) {
        cin>>a[i];
    }
    //from 1 to 2 power size - 1 we will analyse bits. In a bit we will print those index of array which consists 1 
    for(int i = 0; i < (1<<size); i++) {  //1<<size gives 2 power size
        for(int j = 0 ; j < size; j++) {
            if(i & (1<<j)) {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}