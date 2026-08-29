#include<iostream>
using namespace std;
int main(){
    char x = '#';
    int ascii = (int)x;  // this is explicit typecasting
    cout<<ascii<<endl;
    char f = 'D';
    int ascii_no = f; // this is implicit typecasting 
                      // here it automatically take ASCII value
    cout<<ascii_no<<endl;
    int k = 77;
    cout<<(char)k<<endl; // this give an alphabet whose ASCII value is 77
    char ch1 = 'A';
    char ch2 = 'a';
    cout<<ch1+ch2<<endl;

    cout<<(char)('a'+1)<<endl; // It will print b
}