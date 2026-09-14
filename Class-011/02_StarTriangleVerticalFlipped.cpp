/*     *
      **
     ***
    ****
    Star Triangle Veritcal filpped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)<=n) cout<<" ";  // method 1
            else cout<<"*";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){   // method 2
              cout<<" ";             // two for loop in 1 for loop
              }                      // we will use form nowonwards
          for(int k=1;k<=i;k++){
              cout<<"*";
              }
            cout<<endl;
        }
}