#include<iostream>
using namespace std;
void display(int x) {
cout << "Integer: " << x << endl;
}
void display(double x) {
cout << "Double: " << x << endl;
}
void display(char x) {
cout << "Character: " << x << endl;
}
int main(){
    // display();   // gives error as this type of fn is not there
    display(4);
    display(2.3);    // same fn name, parameter also same but parameter type is different
    display('d');    // so this makes all this fn different 
}