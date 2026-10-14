#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8);  // here 8 define array initial size and capacity
    cout<<arr.size()<<" "<<arr.capacity()<<endl;// size: actual element space and capacity: actual space 
    arr.push_back(-6);   // in vector array size increases by getting double when size exceeds
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
}