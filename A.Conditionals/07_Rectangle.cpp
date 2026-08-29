#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length and breadth:";
    cin>>length>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    if(area>perimeter) cout<<"Area is greater with "<<area;
    else if(perimeter>area) cout<<"Perimeter is greater with "<<perimeter;
    else cout<<"Area and Perimeter is same";
}