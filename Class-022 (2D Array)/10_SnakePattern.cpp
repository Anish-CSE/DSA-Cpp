#include<iostream>
using namespace std;
int main(){
   int array[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
   for(int i=0;i<3;i++){ // rows
        if(i%2==0) {
            for(int j=0;j<4;j++){ // column
            cout<<array[i][j]<<" ";
            }
        }
        else {
            for(int j=3;j>=0;j--)   // column
            cout<<array[i][j]<<" ";
        }
   }
}