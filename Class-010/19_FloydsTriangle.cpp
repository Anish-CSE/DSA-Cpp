/* 1
   23
   456
   78910 
   Floyd’s Triangle */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=1;             // think why we take a new variable and why assigned to 1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a;     // if want to see clearly the write cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}