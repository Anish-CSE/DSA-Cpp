#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5); // now it has 1 capacity and 1 element (size)
    v.push_back(3); // now it double its capacity(2)and then copy the first one then add the new one
    v.push_back(9); // now is space available if yes then add new one to it or else again double ...
    v.push_back(512);// similarlly do the steps....
    v.push_back(5);// and previous one get deleted 
    v.push_back(4);// TC is O(n) as 1,2,4,8,....
    v.push_back(0);
    v.push_back(-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}