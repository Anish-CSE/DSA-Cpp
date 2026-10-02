#include<iostream>
using namespace std;
int main(){
    int x=10;         // here intialization happened
    int* ptr=&x;      // here we define a pointer variable which store x's address
    cout<<x<<endl;    // int* ptr , int * ptr , int *ptr are same thing and work as same
    cout<<ptr<<endl;   // gives address
    cout<<*ptr<<endl;   // gives value   think * and & cancel each other for clarification
    cout<<&x<<endl;    // gives address
}