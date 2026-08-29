#include<iostream>
using namespace std;
int main(){
    int x = 8;
    int y = x++ + ++x;
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<x++<<endl; // here value of x is printed then incremented by 1
    cout<<++x<<endl;  // here first incremented then printed
    cout<<--x<<endl; // here first decremented then printed
      // x++ is same as x = x+1
}