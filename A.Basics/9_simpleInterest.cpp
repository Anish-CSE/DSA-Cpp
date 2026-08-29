#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter principal:";
    cin>>p;
    cout<<"Enter rate:";
    cin>>r;
    cout<<"Enter time:";
    cin>>t;
    int interest = (p*r*t)/100;
    
    cout<<"The Simple Interest is:"<< interest;

}