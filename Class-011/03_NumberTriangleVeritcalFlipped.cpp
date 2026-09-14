/*    1
     12
    123
   1234
   Number Triangle Veritical Flipped */

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
              cout<<k;
              }
            cout<<endl;
        }
}