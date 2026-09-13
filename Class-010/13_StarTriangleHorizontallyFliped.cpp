/* ****
   ***
   **
   * 
   Star Triangle Horizontally Filliped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=(n-i);j>0;j--){   // Why we do decreament here and initialization also
            cout<<"*";
        }
        cout<<endl;
    }
}