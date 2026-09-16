/*         1
          1 1
         1 2 1
        1 3 3 1
       1 4 6 4 1
Pascal triangle  */

#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    return fact(n) / (fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){ // spaces
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}

/*#include<iostream>     //think on this method
using namespace std;
int nCr(int x,int y){
    int n=1,r=1,k=1;
    for(int i=1;i<=x;i++) n*=i;
    for(int j=1;j<=y+1;j++) r*=j;
    for(int i=1;i<=(x-y+1);i++) k*=i;
    return n/(r*k);
}
int pascal(int x){
    for(int i=1;i<=x;i++){
        for(int j=x;j>=i;j--) cout<<" ";
        for(int k=0;k<i;k++) cout<<nCr(i,k)<<" ";
        cout<<endl;
    }  
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    pascal(a);
}*/