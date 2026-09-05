#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool num = false;  // for our easiness, try to understand whole logic
    int factors=0;
    for(int i=2;i<n;i++){ // here we know 1 and number itself is a factor.
        if(n%i==0){       // so any one factor b/w 2 and n-1 will make it a composite no.
            num = true;
            break; // used as to exit the loop after getting our required need
        }
    }
    if(n==1) cout<<"Neither Prime or Composite";
    if(num){
        cout<<"It's a Composite Number";
    }
    else {
        cout<<"It's a Prime";
    }
    //for(int i=1;i<n;i++){
    //    if(n%i==0){  
    //        cout<<i<<" ";
    //        factors++;
    //    }
    //}
}
