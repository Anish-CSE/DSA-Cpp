#include<iostream>
using namespace std;
int main(){
    /* 1 bit stores 0 or 1
       1 bytes = 8 bits
       char takes 1 bytes : 8 bits
       int takes 4 bytes  : 32 bits
       long long = 8 bytes : 64 bits
       short = 2 bytes : 16 bits
       float = 4 bytes
       double = 8 bytes
       bool = 1 byte*/
    
     // int ->range : [-2^31 , (2^31-1)]
     // short  : [-2^15 , (2^15-1)]
     // long long : [-2^63 , (2^63-1)]
     // double has more precise than float means double has more decimal places

     double x = 3.14124352345436;
     float y = 3.14124352345436;
     cout<<x<<endl;
     cout<<y<<endl;
     // you can use cout<<setprecision(15) to display upto 15 digits
    }