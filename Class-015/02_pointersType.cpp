#include<iostream>
using namespace std;
int main(){
    int a=2;
    int* p1=&a;      // here int* p1 only store address of integer (if a=1.2 then it will show error)
    cout<<a<<endl;
    cout<<*p1<<endl;
    cout<<p1<<endl;
    cout<<&a<<endl;
    cout<<&p1<<endl;   // pointer itself has it own address

    float* p2;    // work same way as int* p1 but only for their data type
    char* p3;
    double* p4; 
    // p2=&a; // giving error
}