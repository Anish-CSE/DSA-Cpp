#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    cout<<max(a,max(b,c));  // use this way to get the required answer
     // you can use this for many other similar problems
}
