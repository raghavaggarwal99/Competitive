class Solution {
public:
    int minStartValue(vector<int>& A) {
        
        int n=A.size();
        
        int sum=0;
        
        int minn1=INT_MAX;
        
        for(int i=0; i<n; i++){
            
           sum+=A[i];
            
            minn1= min(sum, minn1);
            
        }
        
        
        if(minn1<0){
            return abs(minn1)+1;
        }
        
        return 1;
        
        
        
    }
};
