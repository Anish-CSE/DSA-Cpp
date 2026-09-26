#include<iostream>
using namespace std;
void fun() {
int x = 5;   // this is possible, as every variable has its own box so can be many
cout << x << endl;
}
void display() {
int x = 10;
cout << x << endl;
}
int main() {
fun();
display();
}