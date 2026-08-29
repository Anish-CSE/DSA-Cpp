#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost price(cp):";
    cin>>cp;
    cout<<"Enter Selling price(sp):";
    cin>>sp;  // use for multi line comment-> /* */
    /*if(sp>cp) cout<<"Profit is:"<<(sp-cp);
    else{
        if(cp>sp) cout<<"Loss is :"<<(cp-sp);
        else cout<<"Their is no Loss nor Profit";
    }*/

    // Use if ,else if ladder
    if(sp>cp) cout<<"Profit is "<<(sp-cp);
    else if(cp>sp) cout<<"Loss is "<<(cp-sp);
    else cout<<"No Loss nor Gain";
}