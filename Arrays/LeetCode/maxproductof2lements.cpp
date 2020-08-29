class Solution {
public:
    int maxProduct(vector<int>& A) {
        
        sort(A.begin(), A.end());
        
        
        int n=A.size()-1;
        
        return max((A[0]-1)*(A[1]-1), (A[n-1]-1)*(A[n]-1));
        
        
        
    }
};
