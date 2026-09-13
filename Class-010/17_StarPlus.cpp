/*   *
     * 
   ***** 
     *
     * 
 Star Plus */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter a Number: ";
    cin>>n;
    if(n%2!=0){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==(n/2+1) || i==(n/2+1)) cout<<"*";  // this way is also possible
        //if(j==(n/2+1)) cout<<"*";          // this is for vertical star's
        //else if(i==(n/2+1)) cout<<"*";    // this is for horizontal star's
           else cout<<" ";                   //This is needed to display space
        }
        cout<<endl;
    }
    }
    else cout<<" entered number is even";
}