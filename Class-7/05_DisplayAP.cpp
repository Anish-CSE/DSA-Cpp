#include<iostream>
using namespace std;
int main(){
    //display 2,5,8,11,....
    int n;
    cin>>n;
    for(int i=2;i<(2+(n-1)*3);i+=3){
        cout<<i<<" ";
    }
    /* for(int i=0;i<=(3*n-1);i++){
       cout<<3*n-1<<" ";
       }*/

    /* int a =2,d=3;
     for(int i=1;i<=n;i++){
      cout<<a<<" ";         Best code
      a+=d;
      }*/
}