/* ***********
   ***** *****
   ****   ****
   ***     ***
   **       **
   *         *
   Bridge */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // for first row (2n-1)stars
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    n--;
    // In one loop three loop needed for this kind of structure
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++) cout<<"*";    //for stars (horizontal flipped triangle)
        for(int j=1;j<=2*i-1;j++) cout<<" ";   //for spaces(odd Triangle)
        for(int j=1;j<=n+1-i;j++) cout<<"*";   //for stars (horizontal flipped triangle)
        cout<<endl;
    }
}