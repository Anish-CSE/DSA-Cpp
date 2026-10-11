#include<iostream>
#include<vector>     // header file when vector array to use
using namespace std;
int main(){
    vector<int> arr(4,16);  // dynamic array decalration // index 0 to 4
    int n=arr.size();  // to get size of array
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(8);  // to add element 8 at end
    arr.push_back(3);
    arr.pop_back();  // to remove element at end
    arr.push_back(83);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}