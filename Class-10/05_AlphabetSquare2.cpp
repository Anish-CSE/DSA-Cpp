/* abcd 
   abcd
   abcd 
   abcd
   Alphabet Square 2*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=97;j<n+97;j++){
            cout<<char(j);
        }
        cout<<endl;
    }
}