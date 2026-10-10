#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,67,8,9,9,7,0};
    int target=9;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"Interger is Present";
            break;  // think by yourself why break here
        }
    } // use boolean variable as it is good practise
    /* 
    int arr[]={2,3,5,23,2};
    int target=6;
    bool=false  // assume number is not their
    for(int i=0;i<n;i++){
        if(target==arr[i]) bool=true
    }
        if(bool == true) cout<<" Number Present";
        else cout<<"number not present";
    */
}