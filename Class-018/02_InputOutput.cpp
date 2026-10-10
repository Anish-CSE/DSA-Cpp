#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];        // taking input
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;  // printing output
    }
}