#include<iostream>
using namespace std;
int main(){
    // in for loop way
    for(int i=2;i<101;i+=2){
        cout<<i<<" "; 
    }
    cout<<endl;
    // in while loop way
    int i=2;
    while(i<101){
        cout<<i<<" ";
        i+=2;
    }
    cout<<endl;
    // in do-while loop way
    int a=2;
    do{
        cout<<a<<" ";
        a+=2;
    }while(a<101);
}