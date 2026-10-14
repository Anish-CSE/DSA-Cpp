#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={4,3,8,2,9};
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;  
    for(int i=0;i<v.size();i++){  // here we change our array values, even place double it, odd place square it
        if(v[i]%2 ==0) v[i]*=2;
        else v[i]*=v[i];
    }
    for(int ele: v){              // this will do nothing
        if(ele%2 ==0) ele*=2;     // as only use to print array elements in sequence
        else ele *= ele;
    }
    for(int ele: v) cout<<ele<<" ";  // only use to print array elements
}