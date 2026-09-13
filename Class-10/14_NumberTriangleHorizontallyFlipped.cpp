/* 1234
   123
   12
   1 
   Number Triangle Horizontally Flipped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n;i>0;i--){          // Another Method to solve
        for(int j=0;j<i;j++){
            cout<<(j+1);
        }
        cout<<endl;
    }
}