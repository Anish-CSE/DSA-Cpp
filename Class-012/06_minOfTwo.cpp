#include<iostream>
using namespace std;
void minOfTwo(int a , int b){    // here a and b are parameters
    if(a<b) cout<<"Smallest is :"<<a<<endl;
    else cout<<"Smallest is : "<<b<<endl;
}
int main(){
    minOfTwo(23,64);    // here 23 and 64 are arguments
}