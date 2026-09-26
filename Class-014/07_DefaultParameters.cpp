#include <iostream>
using namespace std;
void power(int base, int exponent = 2) //here if we give two values as parameters then it will execute as a normal fn
{                                  // if given just base no exponent then also it will execute
int ans = 1;                       // as its a default parameter with value 2 so 
for (int i = 0; i < exponent; i++)  // but if base no given then it will show error
ans *= base;
cout << ans << endl;
}
int main() {
power(5);
power(5, 3);
}