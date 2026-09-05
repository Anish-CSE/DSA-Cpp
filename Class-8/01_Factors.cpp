#include<iostream>
#include<cmath>// use this header file when square root is being used
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // we must use less iteration as possible
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){ // we will get factors
            cout<<i<<" ";  
            if(i!=n/i) cout<<n/i<<" ";
        }
    }
}