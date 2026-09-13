/* *   *
    * * 
     *
    * *
   *   * 
   Star Cross */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2!=0){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(i==j || (i+j==n+1)) cout<<"*";  //observe the pattern and position also
           else cout<<" ";
        }
        cout<<endl;
    }
}
else cout<<" Entered number is even so no star cross";
}