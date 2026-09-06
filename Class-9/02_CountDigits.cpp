#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count=0;
    if(n==0) cout<<"Number of Digits is : "<<1;
    else{
    while(n>0){  // here we can write while(n/=10) but count=1 before, think!!
        n/=10;       // here n/=10 means n loses a digit
        count++;
    }
    cout<<"Numbers of Digits is : "<<count;
}
}