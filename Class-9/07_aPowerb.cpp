#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Number and Power: ";
    cin>>a>>b;
    int product=1;
    for(int i=1;i<=b;i++){
        product*=a;
    }
    cout<<"Product is : "<<product;
}