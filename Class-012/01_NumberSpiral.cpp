/* 11111
   12221
   12321
   12221
   11111
   Number Spiral */

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    // Method 2
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i, b = j;
            if(i>n) a = 2*n - i;   // think how its working
            if(j>n) b = 2*n - j;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
cout<<endl;
     //Method 1
    for(int i=1;i<=n;i++){          // think how its working
        for(int j=1;j<=n;j++){
            cout<<min(i,j)<<" ";
        }
        for(int j=n-1;j>=1;j--){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){    // think how its working
        for(int j=1;j<=n;j++){
            cout<<min(i,j)<<" ";
        }
        for(int j=n-1;j>=1;j--){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
}