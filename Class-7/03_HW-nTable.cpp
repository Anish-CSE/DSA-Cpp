#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<11;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    //for(int i=1;i<11;i++){
    //    cout<<i*n<<" ";
    //}
}