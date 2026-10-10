#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n]={}; // observe the difference b/w this two representation
    int array[n];
    cout<<arr[0]<<endl; // give 0
    cout<<array[0]<<endl; // give a grabage value
}