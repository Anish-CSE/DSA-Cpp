#include<iostream>
using namespace std;
void change(int x){
    x=20;
}
void changes(int y[]){
    y[0]=24;
}
int main(){
    int n=3;
    cout<<n<<endl;
    change(n);  // Pass by Value
    cout<<n<<endl;
    int a[]={1,6,5};
    cout<<a[0]<<endl;
    changes(a);  // Pass by Reference
    changes(&a[2]);
    // here a give &a[0] by default
    // here array a[] act as a pointer
    cout<<a[0];
    // so we can do changes(a) only for 0 index element 
    // and for others changes(&a[3]) like that
}