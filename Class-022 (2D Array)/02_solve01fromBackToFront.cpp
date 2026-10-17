#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,40,50,70,90,100};
    int b[]={30,60,80};
    int m=sizeof(a)/4;
    int n=sizeof(b)/4;
        int c[n+m];
    int i=m-1,j=n-1,k=n+m-1;
    while(i>=0 && j>=0){            // Do practice using pen and paper 
        if(a[i]>b[j]){              // Understand the indexing & logic here
            c[k--]=a[i--]; 
        }
        else{
            c[k--]=b[j--];
        }
    }
    while(j>=0) c[k--]=b[j--];
    while(i>=0) c[k--]=a[i--];
    for(int x=0;x<(m+n);x++){
        cout<<c[x]<<" ";
    }
}