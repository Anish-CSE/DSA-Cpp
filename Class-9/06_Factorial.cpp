#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factorial=1;
    for(int i=2;i<=n;i++){  // int i=1 or i=2 will give same result but iteration is less
        factorial*=i;
    }
    cout<<" Factorial is : "<< factorial;
}