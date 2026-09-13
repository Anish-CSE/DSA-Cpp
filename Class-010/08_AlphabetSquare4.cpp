/* aaaa
   BBBB
   cccc
   DDDD
   Alphabet Square 4 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){            // There can be many way to solve this question
        for(int j=0;j<n;j++){
            if(i%2==0) cout<<char(i+97); // for small alphabets observe properly
            else cout<<char(i+65);       // for capital alphabets  "      "
        }
        cout<<endl;
    }
}