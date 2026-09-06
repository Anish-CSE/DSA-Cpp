#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int rev=sum;
    while(n>0){   // we can use for loop also but while looks good
        rev+=n%10;
        sum+=n%10;   // Do dry run for clarification 
        n/=10;
        if(n>0) rev*=10;
    }
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Reverse is : "<<rev;
}