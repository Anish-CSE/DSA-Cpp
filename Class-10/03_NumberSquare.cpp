/* 1234
   1234
   1234
   1234
   Number Square */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout<<j+1;
        }
        cout<<endl;
    }
}