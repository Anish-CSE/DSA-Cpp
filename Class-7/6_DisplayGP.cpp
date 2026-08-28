#include<iostream>
using namespace std;
int main(){
    // Display 1,2,4,8,16....
    int n;
    cin>>n;
    int a =2,r=2;
     for(int i=1;i<=n;i++){
      cout<<a<<" ";         //Best code
      a*=r;
      }
}

