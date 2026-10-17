#include<iostream>
#include<climits>
using namespace std;
int main(){
    int array[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int sum[3];
          // Method 1
    int maxRow=-2,maxSum=INT_MIN;   // sum can be -ve also if all elements are -ve so use INT_MIN
    for(int i=0;i<3;i++){
        int sum=0;                // think why we use this here
        for(int j=0;j<4;j++){
            sum=sum+array[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRow=i;
        }
    }
    cout<<maxRow<<" "<<maxSum;

          // Method 2
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         //cout<<array[i][j]<<" ";
    //         sum[i]+=array[i][j];
    //     }
    // } // TC is O(mn)
    // cout<<endl;
    // if(sum[1]>sum[2] && sum[1]>sum[3]) cout<<"Row 1 has maximum sum";
    // if(sum[2]>sum[1] && sum[2]>sum[3]) cout<<"Row 2 has maximum sum";
    // else cout<<"Row 3 has maximum sum";
    // cout<<max(sum[1],max(sum[2],sum[3]));
}