#include<iostream>
using namespace std;
int main(){
    int n,m;   
    cout<<"Enter two numbers: ";
    cin>>n>>m;

    // Method 1 (without using an extra variable)
    n=n+m;
    m=n-m;
    n=n-m;
    cout<<n<<" "<<m<<endl;

    // Method 2
    n =(n+m) - (m=n);   // One Liner // don't use this as compiler gives actual values as output 
    cout<<n<<" "<<m<<endl;  // as it is not a good practise , search it 
    
    // Method 3
    int temp;
    temp=n;
    n=m;
    m=temp;
    cout<<n<<" "<<m;

    // Method 4 : use for operator ( we will learn later )
    // Method 5 : Built in funciton like swap(a,b)
    // Method 6 : make a fn and use pointer to swap the number by an extra variable temp
}