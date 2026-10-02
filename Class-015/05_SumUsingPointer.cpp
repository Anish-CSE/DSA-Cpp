#include<iostream>
using namespace std;
int sum(int* a, int* b){
    int sum= *a+*b;
    cout<<sum<<endl;
}
int main(){
    int n,m;
    cout<<"Enter the numbers: ";
    cin>>n>>m;
    sum(&n,&m);
}