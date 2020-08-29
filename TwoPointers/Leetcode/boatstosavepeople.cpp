class Solution {
public:
    int numRescueBoats(vector<int>& A, int limit) {
        
        
        sort(A.begin(), A.end());
        
        int start=0;
        int end=A.size()-1;
        int count=0;
        
        while(start<end){
            
            if(A[start]+A[end]<=limit){
                count++;
                start++;
                end--;
            }
            else if(A[end]<=limit){
                count++;
                end--;
            }
            
            
             if(start==end){
                count++;
                break;
            }
            
            
            
        }
        
        
        return count;
        
        
        
        
    }
};
