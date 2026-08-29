#include<iostream>
using namespace std;
int main(){
    float k;
    cout<<"Enter a number:";
    cin>>k;
    int g = (int)k;   // Think in this way
    if(g==k) cout<<"It is a integer";
    else cout<<"Not a integer";
}