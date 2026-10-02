#include<iostream>
using namespace std;
int main(){
    float f=3.4;
    float* p1=&f;   // here p1 is just a variable name but actual work is done by *
    // here * is a dereference operator which allow to access the address
    // so we have ( data_type * variable_name) as a syntax for pointers
    cout<<f<<endl;
    // p1=2.5;  // here to change the actual value we must use *
    *p1 = 2.5;
    cout<<f<<endl;
}