/*     *
      * *
     *   *
    *     *
     *   *
      * *
       * 
 Hollow Diamond */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int space=n-1;
    int star=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=space;j++){   //to get space
            cout<<" ";
        }
        for(int k=1;k<=star;k++){   //to get star
            if(k==1 || k==star) cout<<"*";
            else  cout<<" ";
        }
        if(i<n){
            space--;
            star+=2;
        }
        else{
            space++;
            star -=2;
        }                 //Understand why we did it, do dry run
        cout<<endl;
    }
}