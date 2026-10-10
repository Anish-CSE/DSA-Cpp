#include<iostream>
using namespace std;
int main(){
    int arr[]={2,0,-3,3,-38,-93};
    int n=sizeof(arr)/sizeof(int); // to get the number of elements
    // sizeof() give no. of bytes so above form give exact no. of elements
    // no need to put square bracket
    for(int i=0;i<n;i++){
        if(arr[i]<0) cout<<arr[i]<<endl;
    }
}