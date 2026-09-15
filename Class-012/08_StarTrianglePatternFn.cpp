/* *
   **
   ***
   *
   **
   ***
   ****
   Repeated Star Triangle Pattern */

#include<iostream>
using namespace std;
void TrianglePattern(int n){    //Now as many time we can use this fn
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         cout<<"*";
      }
      cout<<endl;
   }
}
int main(){
   TrianglePattern(3);
   TrianglePattern(6);
}