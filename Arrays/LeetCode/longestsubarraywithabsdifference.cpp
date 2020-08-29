class Solution {
public:
    int longestSubarray(vector<int>& A, int limit) {
        
        
      multiset <int, greater <int> > ms; 
        
        int res = 1;
        int left = 0;
        int right = 0;
        
        
            while(right < A.size()){
                
                ms.insert(A[right]);
                right++;
                
                while(abs(*ms.begin() - *ms.rbegin()) > limit){
                        ms.erase(ms.find(A[left]));
                        left++;
                }
                
                
                res = max(res, right - left);
            }
        
        return res;
        
        
        
        
        
    }
};
