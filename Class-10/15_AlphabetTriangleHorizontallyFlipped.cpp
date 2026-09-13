/* abcd
   abc
   ab
   a 
   Alphabet Triangle Horizontally Flipped */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<char(j+97);
        }
        cout<<endl;
    }
}