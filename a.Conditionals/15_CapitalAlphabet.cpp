#include<iostream>
using namespace std;
int main(){
    char y;
    cout<<"Enter a Character";
    cin>>y;
    int k = y; // or just (int)y instead of k will do
    if(65<=k && k<=90) cout<<"It's a Capital Alphabet";// compare separetely
    else cout<<"Not a Capital Alphabet";       // not like (65<=k<=90)
}