#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // (n%2==0) ? cout<<"Even" : cout<<"Odd";
    cout<<((n%2==0) ? "Even" : "Odd")<<endl;

    int x = 6;
    int y = (x++ > 12) ? x-4 : x*4;
    cout<<y;
}