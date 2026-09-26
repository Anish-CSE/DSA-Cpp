/* 1
   01
   101
   0101
   Binary Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    /* int a=0;                        // Method 2 by me
       for(int i=0;i<n;i++){
       a=i;
        for(int j=0;j<(i+1);j++){
          a++;
          if(a%2!=0) cout<<1;
          else cout<<0;
        } 
       }
        */
}