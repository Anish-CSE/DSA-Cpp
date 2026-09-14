/*    *****
     *****
    *****
   ***** 
   Rhombus */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
// Whenever see this king of pattern always think like two pattern 1.Space Triangle
// 2.Star Square  then by combining both the star square shifted diagonally

    for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){   // method 2
              cout<<" ";             // two for loop in 1 for loop
              }                      // we will use form nowonwards
          for(int k=1;k<=n;k++){      // here k<=n not <=i think why we did this
              cout<<"*";
              }
            cout<<endl;
        }
}