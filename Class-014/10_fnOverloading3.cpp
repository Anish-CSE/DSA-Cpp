#include<iostream>
using namespace std;
void fun(int x, char ch) {
cout << "int, char" << endl;
}
void fun(char ch, int x) {
cout << "char, int" << endl;
}
int main(){
    fun(2,'e');  // these are two different fn as position of parameter type if different
    fun('e',2);   // their are 3 cases as we have seen so remember it!!!!
}