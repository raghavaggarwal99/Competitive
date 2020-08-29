class Solution {
public:
    int findMin(vector<int>& A) {
        
        
        sort(A.begin(), A.end());
        
        return A[0];
        
        
    }
};
