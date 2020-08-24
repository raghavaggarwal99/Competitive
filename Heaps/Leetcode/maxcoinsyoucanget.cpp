class Solution {
public:
    int maxCoins(vector<int>& A) {
        
        int ans=0;
        
        sort(A.begin(), A.end(), greater<int>());
        
        int start=0;
        int end=A.size()-1;
        
        // if(A.size)
        
        
       while(start<end){
           
           int alice=A[start];
           start++;
           int me=A[start];
           start++;
           
           int bob=A[end];
           end--;
           
           ans+=me;
           
           
       }
        
        
        return ans;
        
        
    }
};
