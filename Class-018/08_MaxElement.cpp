#include<iostream>
using namespace std;
int main(){
    float arr[]={2.9,35.3,3.49348,98.0,388.1};
    int max=arr[0]; // here if int array was their then INT_MIN can be used
    for(int i=0;i<sizeof(arr)/sizeof(float);i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Maximum number is: "<<max;  // giving answer in int form, why ?? 
}