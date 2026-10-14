#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){  // Pass by value so no change
    v[2]=99;
}
void changes(vector<int> &v) { // Pass by reference so it changes
    v[2]=99;
}
int main(){
     vector<int> v={4,5,2,6,3,99,0};
     change(v);
     cout<<v[2]<<endl;
     changes(v);
     cout<<v[2]<<endl;
}