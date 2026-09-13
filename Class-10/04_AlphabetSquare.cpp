/* ABCD
   ABCD
   ABCD
   ABCD 
   Alphabet Square */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=0;i<n;i++){       // here j=65=i till j=68=i
        for(int j=0;j<n;j++){
            cout<<char(j+65);   // using typecasting 
        }
        cout<<endl;
    }
}