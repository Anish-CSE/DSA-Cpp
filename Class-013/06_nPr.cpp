#include<iostream>
using namespace std;
int f2(int x,int y){
    int n=1;
    for(int i=1;i<=x;i++) n*=i;
    int r=1;
    for(int i=1;i<=(x-y);i++) r*=i;
    cout<<x<<"P"<<y<<" value is: "<<n/r;
}
int main(){
    int a,b;
    cout<<"Enter n and r for nPr : ";
    cin>>a>>b;
    f2(a,b);
}