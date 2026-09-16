#include<iostream>
using namespace std;
int main(){
    if(5<6) {
        int x=12;
        cout<<x+4<<endl;
    }
    // cout<<x+6;  // gives error as x is defined in if block so outside if not access to x
    int y=1;
    if(5<6){
        int y=12;
        cout<<y+6<<endl;
    }
    cout<<y+7;  // here no error as y is defined in main block so can be accessed inside & outside
}