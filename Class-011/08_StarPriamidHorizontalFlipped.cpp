/*  *******
     *****
      ***
       *
    Star Pramid Horizontal flipped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int space=1;
    int star=2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=space;j++){   //to get space
            cout<<" ";
        }
        for(int k=1;k<=star;k++){    //to get star
            cout<<"*";
        }
        space++;                    //Understand why we did it, do dry run
        star-=2;
        cout<<endl;
    }
}