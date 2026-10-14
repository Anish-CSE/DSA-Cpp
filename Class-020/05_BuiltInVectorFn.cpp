#include<iostream>
#include<vector>
#include<algorithm> // if you are getting error
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    sort(v.begin(), v.end());    // arrange all elements in ascending order (increasing order)
    for(int ele: v) cout<<ele<<" ";
    cout<<endl;

    vector<int> fn={2,3,5,3,2,46,0};
    sort(fn.begin()+1, fn.end());    // want to fix the 1st element
    for(int ele:fn ) cout<<ele<<" ";
}