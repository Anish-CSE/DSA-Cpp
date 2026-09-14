/*    *
     ***
    *****
   *******
   Star Priamid */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //Method 1
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Method 2
    int space=n-1;
    int star=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=space;j++){   //to get space
            cout<<" ";
        }
        for(int k=1;k<=star;k++){    //to get star
            cout<<"*";
        }
        space--;                    //Understand why we did it, do dry run
        star+=2;
        cout<<endl;
    }
}