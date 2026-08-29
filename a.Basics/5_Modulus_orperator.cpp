#include<iostream>
using namespace std;
int main(){
    cout<<42%3<<endl; // modulus operator always gives remainder 
    // cout<<41%0<<endl;  // this cannot be executed as division by zero is not possible
    cout<<41%(-8)<<endl;  // this is same as 41%8
    cout<<(-41)%8<<endl;  // this will give negative remainder 
    cout<<2%32<<endl;     // answer is 2 as 2 is smaller than 32
    cout<<(-34)%(-456)<<endl;  // here also answer is negative 
}