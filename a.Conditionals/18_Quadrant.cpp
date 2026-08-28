#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x's coordinate: ";
    cin>>x;
    cout<<"Enter y's coordinate: ";
    cin>>y;    //if any one is zero then many more if else will be needed
    if(x>0 && y>0) cout<<"1st Quadrant";
    else if(x>0 && y<0) cout<<"2nd Quadrant";
    else if(x<0 && y>0) cout<<"3rd Quadrant";
    else if(x==0 && y==0) cout<<"At origin";
    else cout<<"4th Quadrant";
}