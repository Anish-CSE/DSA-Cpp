#include<iostream>
using namespace std;
void fun() {   //default function with no parameters
int x = 5;
cout << x << endl;
}
void display(int a, int b) {   // here function having two parametes
int sum=a+b;                  // when two parameters are given then only it will execute
cout << sum << endl;          // if given one parameter only then it will show error
}
int main() {
fun();
display(4,5);
//display(6,);    // shows error
}