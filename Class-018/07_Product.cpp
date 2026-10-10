#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,3,4,5};
    int product=1;
    int n=sizeof(arr)/4; // think why we divide by 4 here
    for(int i=0;i<n;i++){
        product *=arr[i];
    }
    cout<<"Product is : "<<product;
}