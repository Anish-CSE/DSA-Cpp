#include<iostream>
using namespace std;
int main(){
    int arr[7]; // static allocation
    int* brr = new int[3]; // dynamic allocation
    brr[0]=4;  // after this garbage value 
    for(int i=0;i<3;i++){
        cout<<brr[i]<<" ";
    }
}