#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a; cin>>b; cin>>c;
    (a>b) ? ((a>c) ? cout<<"a is greatest" : (b>c) ? cout<<"b is greatest" : cout<<"c is greatest") : ((b>c) ? cout<<"b is greatest" : cout<<"c is greatest");
   // just a cool way to use nested ternary operator instead of if else 
}