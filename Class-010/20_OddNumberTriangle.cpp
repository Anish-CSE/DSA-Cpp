/* 1
   13
   135
   1357 
   Odd Number Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a=1;                      // think why we initialize here, think! think!!
        for(int j=1;j<=(i+1);j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}