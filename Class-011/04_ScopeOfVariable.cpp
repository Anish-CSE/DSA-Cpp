#include<iostream>
using namespace std;
int main(){
    // case 1
    int i;          // here if we intialize out of for loop then it can use futhur
    for(i=1;i<5;i++) cout<<"Hey, pal"<<endl;
    cout<<i;

    // case 2
    for(int a =1;a<3;a++) cout<<"fun"<<endl;
    //cout<<a;          // this will give error,why
}