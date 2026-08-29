#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n){           // not much useful, but should know what is it
        case 1:          // this way you write, if n matches wiht the case number then it start executing further
         cout<<"You are fantastic";
         break;          // it is use to exit the particular case, or else it will print all other cases after one case is true
        case 2: 
         cout<<"You are funny";
         break;
        case 3:
         cout<<"You are Champion";
         break;
        default:          // you must use default case but it is not mandatory
         cout<<"You choose invalid number";
    }
}