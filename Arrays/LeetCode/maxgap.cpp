class Solution {
public:
    int maximumGap(vector<int>& A) {
        
        int n=A.size();
        
        if(n<2){
            return 0;
        }
        
        sort(A.begin(), A.end());
        
        int ans=0;
        
        for(int i=1; i<n; i++){
            if(A[i]-A[i-1]>ans){
                ans=A[i]-A[i-1];
            }
            
        }
        
        return ans;
        
        
        
        
        
        
    }
};
