#include<iostream>
using namespace std;
int main(){
    int* arr = new int[7];   // pointer array
    arr[0]=4;                // remaining are garbage value
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}