#include<iostream>
using namespace std;
void print() {     // fn with no parameter
cout << "No arguments" << endl;
}
void print(int x) {    // fn with 1 parameter
cout << "One integer: " << x << endl;
}
void print(int x, int y) {   // fn with 2 parameters
cout << "Two integers: " << x << " " << y << endl;
}
int main(){
    print();
    print(2);     // name can be same for fn but parameter make them different
    print(2,3);   // This is call function Oveloading 
}