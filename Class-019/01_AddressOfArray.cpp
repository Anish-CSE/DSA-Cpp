#include<iostream>
using namespace std;
int main(){
    int arr[]={-21,5,25,584,-2,0,-234};
    int n = sizeof(arr)/sizeof(int);
    cout<<&arr[0]<<endl;
     cout<<&arr<<endl;
     cout<<arr<<endl;
     // all above three are same
     cout<<arr[1]<<endl;  // give value
     cout<<&arr[2]<<endl;  // give address
}   