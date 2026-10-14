#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    print(arr);
    for(int i=0, j=arr.size()-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    print(arr);
    /*
    int i=0, j=arr.size()-1;
    while(i<j){
    swap(arr[i].arr[j]);
    i++;
    j--;
    }
    print(arr);
    */

}