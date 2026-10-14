/*   // GreeksforGreeks Segregate 0's and 1's
class Solution {                                    
  public:
    void segregate0and1(vector<int> &arr) {       // Method 1
        // code here
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr'i)==0
            i++;
            else if(arr[j]==1)j--;
            else if(arr[i]==1 && arr[j]==0){
          {      swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }
        void segregate0and1(vector<int> &arr){
        int zeros=0,ones=0;
        for(int i=0;i<arr.size();i++){
        if(arr[i]==0) zeros++;
        else ones++;
        }
        for(int i=0;i<zeros;i++){
        arr[i]=0;
        }
        for(int i=zeros;i<arr.size();i++){
        arr[i]=1
        }
        }
};


*/