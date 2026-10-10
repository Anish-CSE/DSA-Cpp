#include<iostream>
using namespace std;
int main(){
    // Array is used for grouping a number of task/work in one go 
    int array[]={1,3}; // declaration way
    int n=3,m=2;
    char arr[n];  // if write char arr[] give error as size need to mentioned
    float arra[m];   // so we initialized or give input
    // index star from 0,1,2 ... 
    cout<<array[1] <<endl; // give 3
    cout<<arr[2]<< endl; // gives nothing 
}