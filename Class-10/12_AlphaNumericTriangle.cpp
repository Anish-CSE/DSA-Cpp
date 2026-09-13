/* 1
   AB
   123
   ABCD
   12345 
   AlphaNumeric Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            if(i%2==0) cout<<j+1;
            else cout<<char(j+65);     // you can write (char)(j+65) will do same work
        }
        cout<<endl;
    }
}