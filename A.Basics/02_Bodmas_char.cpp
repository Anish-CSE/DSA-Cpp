#include<iostream>
using namespace std;
int main(){
    int x = 2/3*6; // here we evalute form left to right,when operators are same type so we get 0
    cout<<x<<endl; // here / and * order is higher than + and -
    char y = '?'; // always put '' , for char data type
    int z = 1;
    cout<<y<<endl;
    cout<<z<<endl;
}