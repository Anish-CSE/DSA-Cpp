#include <iostream>
using namespace std;
int x = 100;
void fun() {
cout << x << endl;
}
int main() {    // understand the Global and Local variables
cout << x << endl;
fun();
{
    int x=200;
    cout<<x<<endl;
}
cout<<x<<endl;
}