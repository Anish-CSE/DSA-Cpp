#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a four digit number:";
    cin>>n;
    if(n<10000 && n>999) cout<<"Its four digit number";
    else cout<<"Not a four digit number";
}