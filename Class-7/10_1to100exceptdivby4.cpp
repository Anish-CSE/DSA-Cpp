#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<21;i++){
        if(i%4==0) continue;// it skips a iteration when it's true
        cout<<i<<" ";
    }
}