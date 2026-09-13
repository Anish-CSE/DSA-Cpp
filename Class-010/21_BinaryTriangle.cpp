/*  1
    0 1
    1 0 1
    0 1 0 1 
    Binary Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;   // also see positon sum pattern
            else cout<<0;
        }
        cout<<endl;
    }
}
