#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,40,50,70,90,100};
    int b[]={30,60,80};
    int m=sizeof(a)/4;
    int n=sizeof(b)/4;
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];  // same as below
            /* c[k]= a[i];
               k++;
               i++
               */
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(j<n) c[k++]=b[j++];
    while(i<m) c[k++]=a[i++];
    for(int x=0;x<(m+n);x++){
        cout<<c[x]<<" ";
    }
}