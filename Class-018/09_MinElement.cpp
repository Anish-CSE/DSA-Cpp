#include<iostream>
using namespace std;
int main(){
    int arr[]={2,35,0,-2,39,-21};
    int n= sizeof(arr)/sizeof(int);
    int mini=arr[0];   // Avoid writing max,min here in code as it is inbuilt function name
    for(int i=0;i<n;i++){
        if(arr[i]<mini) mini=arr[i];
        // mini=min(arr[i],mini);   // better way to use inbuilt fn
    }
    cout<<"Minimum value is: "<<mini;
}