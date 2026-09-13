/* *********
   *       *
   *       *
   *       *
   *       *
   ********* 
   Hollow Rectangle */

#include<iostream>
using namespace std;
int main(){
    int n,m;                    // here n is no. of rows and m is no. of columns
    cout<<"Enter the numbers: ";
    cin>>n>>m;
    for(int i=0;i<n;i++){       // for rows 
        for(int j=0;j<m;j++){   // for columns
            if(i>0 && i<(n-1) && j>0 && j<(m-1)) cout<<" ";   // note it
            else cout<<"*";
        }
        cout<<endl;
    }
}