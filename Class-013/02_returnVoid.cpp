#include<iostream>
using namespace std;
void Sum(int k){
    cout<<"Sum means additon"<<endl;
    if(k<10) return;   // here this return gives void as return value means nothing 
    cout<<k;
}
int main(){
    Sum(2);
    Sum(17);   //see properly what happen
    Sum(5);
}