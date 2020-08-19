class Solution {
public:
    int maxArea(vector<int>& A) {
        
         int n=A.size();
    
       int start=0;
        int end=n-1;
        
        
        
        int ans=0;
        
        while(start<end){
            
            ans=max(ans, min(A[start], A[end])*(end-start));
            
            if(A[start]<A[end]){
                start++;
            }
            else{
                end--;
            }
            
            
            
        }
        
        
        return ans;
        
    }
};
