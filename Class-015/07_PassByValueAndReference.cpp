#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<b<<endl;
    swap(&a,&b);   // Pass by reference
    cout<<a<<b<<endl;
}

/*
 void swap(int* a, int* b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<b<<endl;
    swap(&a,&b);   // Pass by Value
    cout<<a<<b<<endl;
}
 */