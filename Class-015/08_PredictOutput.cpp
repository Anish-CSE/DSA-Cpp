#include<iostream>
using namespace std;
int main(){
    int a=2;
    int* ptr=&a;
    int b=++*ptr;  // here b=*ptr and *ptr=a=2 so ++*ptr is increased by 1 so a=3 and b=3
    cout<<a<<" "<<b;  // output is 3 3

}