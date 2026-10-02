#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int* p1=&n;
    int** p2=&p1;  // for accessing a pointer need double pointer
    int*** p3=&p2;  // for double need triple pointer
    // for value
    cout<<n<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<***p3<<endl;
    // for address
    cout<<&n<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;  // storing *p1 address
    cout<<p3<<endl;  // storing **p2 address
}