#include<iostream>
using namespace std;
int main(){
    //int arr[rows][columns];
    int array[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    //above need to mention columns
    //int array[][]={{}...} // gives error
    //int array[3][]={{}...} // gives error
    //int array[3][4]={{}...} // right way
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<array[i][j]<<" ";
        }
    } // TC is O(mn)
}