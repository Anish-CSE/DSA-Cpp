#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int rev=0;
        while(n>0){
            if(n==0) break;  // if n=0 then no need to run the loop
            rev+=n%10;       // here we are taking last digit of the number
            n/=10;            // here we are eliminating last digit
            if(n>0) rev*=10;  // here if because at last it should not multiply by 10
        }
        cout<<"Reverse Number is: "<<rev;
}