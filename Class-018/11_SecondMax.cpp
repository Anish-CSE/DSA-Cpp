#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,3,2,5,0,66,6,222,3};
    int n=sizeof(arr)/sizeof(int);
    int max1=arr[0];
    int max2=arr[0];
    for(int i=0;i<n;i++){
        max1=max(arr[i],max1);
    }
    for(int j=0;j<n;j++){
       if(max1!=arr[j]) max2=max(max2,arr[j]);
    }
    cout<<"First Maximum number is: "<<max1<<endl;
    cout<<"Second Maximum number is: "<<max2;
}
