#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;  // we can do it directly 
    if(a>b && a>c) cout<<"a is greater";
    else if(b>a && b>c) cout<<"b is greater";
    else cout<<"c is greater";
    cout<<endl;
    
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    if(a<b && a<c) cout<<"a is smallest";
    else if(b<a && b<c) cout<<"b is smallest";
    else cout<<"c is smallest";
}