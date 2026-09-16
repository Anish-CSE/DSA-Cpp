#include<iostream>
using namespace std;
int product(int a,int b){   // we can use void,float,double... in place of int 
    return a*b;           // return use to end the fn and just give the value if possible, 
}                            // giving value doesn't mean printing value
int main(){
    product(2,3);           // observe the differnce b/w this two lines
    cout<<product(5,2);
}