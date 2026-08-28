#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%15==0) cout<<"Number not divisble by 5 or 3";
    if(a%5==0) cout<<"Number divisble by 5";
    if(a%3==0) cout<<"Number divisble by 3";
    else cout<<"Not divisble by 5 or 3";
}