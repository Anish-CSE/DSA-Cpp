#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) {
            cout<<"Not a Prime";
            break; // this will leave for loop when true
        }   
        count=count+1;
}
    if(count>n-4) cout<<"Prime number";
    /* if a is factor of n, then n/a will be a factor of n
       number of factors before root(n) = number of factors after root(n)
       Some facts to notice....*/
}