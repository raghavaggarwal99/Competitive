class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        
        int res = 0;
        int n = A.size();
        int j = 0;
        
        for (int i = 0; i<n-2; ) {
            
            int diff = A[i+1]-A[i];
            
            int j = i+1;
            
            while (j+1 < n) {
                if (A[j+1]-A[j] == diff){
                    j++;
                }
                
                else break;
            }
            // subarray with at least length 3
            
            if (j-i>=2) {
                for (int t = 1; t <= j-i-1; t++) { // if length 4 -> 1+2 subarrays, length 5-> 1+2+3 subarrays. Just use the pattern
                    res += t;
                }
            }
            i=j; // if j is the last element in the subarray, then start over from j
        }
        return res;
        
        
        
    }
};
