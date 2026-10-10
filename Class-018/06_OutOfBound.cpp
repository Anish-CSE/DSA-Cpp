#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,3};
    cout<<arr[23]<<endl;   // give some unkown value
    cout<<arr[-2]<<endl;   // give some garbage value  or even error
    cout<<arr[3]<<endl;
}