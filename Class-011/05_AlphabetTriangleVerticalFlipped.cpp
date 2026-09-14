/*   A
    AB
   ABC
  ABCD 
  Alphabet Triangle Vertical Flipped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){   // method 2
              cout<<" ";             // two for loop in 1 for loop
              }                      // we will use form nowonwards
          for(int k=1;k<=i;k++){
              cout<<char(k+64);      // think why we do this
              }
            cout<<endl;
        }
    /*   A
        BB
       CCC
      DDDD   */
    for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){   // method 2
              cout<<" ";             // two for loop in 1 for loop
              }                      // we will use form nowonwards
          for(int k=1;k<=i;k++){
              cout<<char(i+64);
              }
            cout<<endl;
        }

}