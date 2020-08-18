int Solution::anytwo(string A) {
    
    
    int n = A.length(); 
 
    int dp[n+1][n+1]; 
    for (int i=0; i<=n; i++) 
        for (int j=0; j<=n; j++) 
            dp[i][j] = 0; 
   

    for (int i=1; i<=n; i++) 
    { 
        for (int j=1; j<=n; j++) 
        { 
            
            if (A[i-1] == A[j-1] && i != j) 
                dp[i][j] =  1 + dp[i-1][j-1];           
                        
            // If characters do not match 
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]); 
        } 
    } 
    
    if(dp[n][n]<=1){
        return 0;
    }    
    
    return 1; 
    
    
}

