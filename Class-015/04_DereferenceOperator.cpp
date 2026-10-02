#include<iostream>
using namespace std;
void change(int* a){
   // int* p1= 10; //do write same pointer variable name as in parameter or else error 
   *a=12;    // don't use data type here like int as it is done in parameter 
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<endl;
    change(&n);  // call by reference
   //  cout<<change(&n)<<endl;  // gives error
    cout<<n<<endl;
}