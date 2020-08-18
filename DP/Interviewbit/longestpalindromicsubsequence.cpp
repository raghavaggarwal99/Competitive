int Solution::solve(string A) {
    
    int n=A.length();
    
    int dp[n][n];
    
    for(int i=0; i<n; i++){
        dp[i][i]=1;
    }
    
    
    for(int w=2; w<=n; w++){
        
        for(int i=0; i<n-w+1; i++){
            
            int j=i+w-1;
            
            if(A[i]==A[j] && w==2){
                dp[i][j]=2;
            }
            else if(A[i]==A[j]){
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else{
                dp[i][j]=max(dp[i+1][j], dp[i][j-1]);
            }
            
        }
    }
    
    
    return dp[0][n-1];
    
    
    
    
    
    
    
    
}

