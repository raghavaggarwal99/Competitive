class Solution {
public:
    bool isMatch(string A, string B) {
        
        
            
        int n=A.length();
        int m=B.length();
        
    
         if(n!=0 && m==0){
            return false;
        }
        
        
        int dp[n+1][m+1];
        
       memset(dp, 0, sizeof(dp));
        
        dp[0][0]=1;
        
        for(int i=1; i<=m; i++){
            if(B[i-1]=='*'){
                dp[0][i]=dp[0][i-1];
            }
            
        }
        

        for(int i=1; i<=n; i++){
            
            for(int j=1; j<=m; j++){
                
                
                if(B[j-1]=='*'){
                     dp[i][j]= dp[i-1][j] || dp[i][j-1];
                }
                else if(B[j-1]=='?' || A[i-1]==B[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=0;
                    
                }
                
                
                
            }
            
        }
        
        return dp[n][m];
        
        
        
        
        
        
        
    }
};
