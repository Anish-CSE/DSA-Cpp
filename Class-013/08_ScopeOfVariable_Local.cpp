#include<iostream>
using namespace std;
int change(){
    int a=20;
}
int change2(int x){
    cout<<x<<endl;
    x=12;
    cout<<x<<endl;
}
int main(){    // we observe that here fn only use the value and do not change the value 
    int x;   // that  we known calling by value
    cout<<"Enter a number: ";
    cin>>x;
    //cout<<a<<endl;   // error as 'a' is initialized in fn not in main and vice-versa it also true
    change2(x);
    cout<<x;   // here do not change the value
}  