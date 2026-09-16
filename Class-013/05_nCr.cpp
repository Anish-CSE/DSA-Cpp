#include<iostream>
using namespace std;
int f1(int x,int y){       // this fn is for nCr
    int n=1;
    for(int i=1;i<=x;i++) n*=i;
    int r=1;
    for(int i=1;i<=y;i++) r*=i;
    int k=1;
    for(int i=1;i<=(x-y);i++) k*=i;
    cout<<x<<"C"<<y<<" is "<<n/(r*k)<<endl;
}
int main(){
   int a,b;
   cout<<"Enter n and r for nCr : ";
   cin>>a>>b;
   f1(a,b);
}