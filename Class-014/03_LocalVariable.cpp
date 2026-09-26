#include<iostream>
using namespace std;
int main() {
int x = 10; // this will be access in main only
{
int x = 20;   // this will be accessable only within this brackets
cout << x << endl;   // This is called Variable Shadowing
}
cout<<x<<endl;  // this will take main's variable value
}