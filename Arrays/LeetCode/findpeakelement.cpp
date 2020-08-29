class Solution {
public:
    int findPeakElement(vector<int>& A) {

        int n=A.size();
        
        if(n<=1){
            return 0;
        }
        
        if(A[n-1]>A[n-2]){
            return n-1;
        }
        
        for(int i=1; i<A.size()-1; i++){
            
            if(A[i]>A[i-1] && A[i]>A[i+1]){
                return i;
            }
            
        }
        
        if(A[n-1]>A[n-2]){
            return n-1;
        }
        
        
        return 0;
        
        
        
        
        
        
    }
};
