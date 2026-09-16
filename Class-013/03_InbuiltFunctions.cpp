#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<max(51,78)<<endl;
    cout<<min(51,78)<<endl;
    //cout<<max(51,78,12)<<endl; // error as it is inbuilt in such a way so it can only take two values
    cout<<pow(2.6,2.6)<<endl;   // exponent , power can be int, float anything
    cout<<sqrt(3.14)<<endl;   // square root
    cout<<cbrt(10)<<endl;    // cube root
    cout<<abs(-5)<<endl; // modulus 
    cout<<sqrt(-6);   // if given negative number then it will show "nan"
}