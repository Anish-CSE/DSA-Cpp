/* *
   ***
   *****
   *******
   Odd Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
          for(int j=1;j<=2*i-1;j++){   // for odd stars or no. : 2*n-1 or 2*n+1
              cout<<"*";               // for even stars or no. : 2*n
              }                      
            cout<<endl;
        }
    // Method 2
    int a=1;
    for(int i=1;i<=n;i++){
          for(int j=1;j<=a;j++){   // this is manual code without using formula
              cout<<"*";             
              } 
              a+=2;                     
            cout<<endl;
        }
}