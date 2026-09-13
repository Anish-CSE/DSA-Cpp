/* 1111
   2222
   3333
   4444
   Number Square 2 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}