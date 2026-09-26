#include<iostream>
using namespace std;
void Swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int n,m;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    Swap(n,m);  // it don't change the actual value but it takes a copy of it and use
                // So called "called by value"
    cout<<n<<" "<<m<<endl;  // to change the actual value we will use pointers
}                           // this will be called "called by reference"