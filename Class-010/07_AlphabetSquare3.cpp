/* AAAA
   BBBB
   CCCC
   DDDD
   Alphabet Square 3 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(i+65);   //Note here
        }
        cout<<endl;
    }
}