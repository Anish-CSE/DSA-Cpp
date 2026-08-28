#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "; //Only positive Numbers
    cin>>n;
    if(n%5==0 && n%3==0) cout<<"Rita";  // see order and think why this order only!!
    else if(n%3==0) cout<<"Sita";
    else if(n%5==0) cout<<"Gita";
    else cout<<"Bhagavat Gita";
}